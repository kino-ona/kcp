import gulp from 'gulp'
import babel from 'gulp-babel'
import base64 from 'gulp-base64'
import sass from 'gulp-sass'
import autoprefixer from 'gulp-autoprefixer'
import fileinclude from 'gulp-file-include'
import webserver from 'gulp-webserver'
import livereload from 'gulp-livereload'
import del from 'del'

const clean = () => {
  return del(['dist'])
}

const scssOptions = {
  // Sass compile option
  outputStyle: 'compact',
  indentType: 'space',
  indentWidth: 2,
  precision: 6,
  sourceComments: false
}

const src = 'src'
const dist = 'dist'
const paths = {
  js: `${src}/**/*.js`,
  scss: `${src}/**/*.scss`,
  html: `${src}/**/*.html`,
  image: `${src}/**/*.{png,jpg,jpeg,gif,svg,ico,mp4}`,
  font: `${src}/**/*.{ttf,otf,woff,woff2,eot,svg}`
}

const htmlIncludeOptions = {
  prefix: '@@',
  basepath: '@file',
  indent: true
}

function style() {
  return gulp
    .src(paths.scss, {sourcemaps: true})
    .pipe(sass(scssOptions).on('error', sass.logError))
    .pipe(
      base64({
        extensions: ['svg', 'png', /\.jpg#datauri$/i],
        maxImageSize: 8192,
        debug: true
      })
    )
    .pipe(autoprefixer())
    .pipe(gulp.dest(dist, {sourcemaps: '/maps'}))
}

function htmlInclude() {
  return gulp.src(paths.html).pipe(fileinclude(htmlIncludeOptions)).pipe(gulp.dest(dist))
}

function scripts() {
  return gulp
    .src(paths.js, {sourcemaps: true})
    .pipe(
      babel({
        presets: ['@babel/preset-env']
      })
    )
    .pipe(gulp.dest(dist))
}

function copyImage() {
  return gulp.src(paths.image, {since: gulp.lastRun(copyImage)}).pipe(gulp.dest(dist))
}

function server() {
  return gulp.src(dist).pipe(
    webserver({
      livereload: true
    })
  )
}
function watchFiles() {
  livereload.listen()
  gulp.watch(paths.scss, style)
  gulp.watch(paths.html, htmlInclude)
  gulp.watch(paths.js, scripts)
  gulp.watch(dist + '/**').on('change', livereload.changed)
}

const watch = gulp.parallel(server, watchFiles)
const build = gulp.series(clean, gulp.parallel(style, scripts, htmlInclude, copyImage))

exports.build = build
exports.default = watch
