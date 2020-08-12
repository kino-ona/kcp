$(document).ready(function() {
});
if($('#kvswipe').length > 0){
	var mainswipe = new Swiper('#kvswipe', {
		loop: true,
    // speed: 600,
    parallax: true,
    observer: true,
    observeParents: true,
    pagination: {
      el: '#kvswipe .swiper-pagination',
      type: 'progressbar',
	    // renderCustom: function (swiper, current, total) {
	    //   return '<div class=row>' + ('' + current).slice(-2) + ' / <span class=pagination-total>' + ('' + total).slice(-2) + '</span></div>';
	    // }
    },
    on: {
      init: function () {
        /* do something */
      },
    }
  });
  // var counter = $('.fraction');
  // var currentCount = $('<span class="count">1<span/>');
  // counter.append(currentCount);

  // mainswipe.on('transitionStart', function () {
  //   var index = this.activeIndex + 1,
  //       $current = $("#kvswipe .swiper-slide").eq(index),
  //       $c_cur = $("#count_cur"),
  //       $c_next = $("#count_next"),
  //       dur = 0.6;

  //   console.log(this.total)

  //   var prevCount = $('.count');
  //   currentCount = $('<span class="count next">' + index + '<span/>');
  //   counter.html(currentCount);
  // });


	$(window).resize(function (){
		mainswipe.update();
	})
}
