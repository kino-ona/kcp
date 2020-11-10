$(document).ready(function() {
});
if($('#kvswipe').length > 0){
	var mainswipe = new Swiper('#kvswipe', {
		loop: true,
		parallax: true,
		observer: true,
		observeParents: true,
		pagination: {
			el: '.kvpage .swiper-pagination',
			type: 'progressbar',
		},
		observer: true,
		observeParents: true,
		autoplay: {
			delay: 2500,
			disableOnInteraction: false,
		},
	});

	var cur = mainswipe.realIndex + 1,
			total = mainswipe.slides.length - 2;
	var cur = (cur < 10) ? '0' + cur : cur;
	var total = (total < 10) ? '0' + total : total;
	$('#kvswipe').find('.swiper-counter').append('<span class=cur>' + cur + '</span> <span class=total> / ' + total + '</span>')
	mainswipe.on('slideChange', function () {
		var cur = mainswipe.realIndex + 1,
				cur = (cur < 10) ? '0' + cur : cur;
		$('#kvswipe').find('.swiper-counter .cur').html(cur)
	});

	var kvh = $('#kvswipe .figure').innerHeight();
	$('#kvswipe .kvpage').css({
		'top': kvh - 43
	})

	$(window).resize(function (){
		mainswipe.update();
	})
}

if($('#solutionswipe').length > 0){ // 솔루션
	var soluswipe = new Swiper('#solutionswipe', {
		slidesPerView: 1.2,
		centeredSlides: true,
		observer: true,
		observeParents: true,
		navigation: {
			nextEl: '#solutionswipe .swiper-button-next',
			prevEl: '#solutionswipe .swiper-button-prev',
		},
	});
}

if($('#recommswipe').length > 0){ // 추천제품
	var recommswipe = new Swiper('#recommswipe', {
		loop: true,
		initialSlide: 1,
		slidesPerView: 1,
		centeredSlides: true,
		navigation: {
			nextEl: '#recommswipe .swiper-button-next',
			prevEl: '#recommswipe .swiper-button-prev',
		},
	});
	if($('#recommswipe .swiper-slide').length > 0){
		$('.recommand_sec .swiper-container').css({
			'background-size': $('#recommswipe .swiper-slide').width() - 40
		});
	}
	$(window).resize(function (){
		var resW = setTimeout(function(){
			$('.recommand_sec .swiper-container').css({
				'background-size': $('#recommswipe .swiper-slide').width() - 40
			});
			clearTimeout(resW);
		}, 300);
	})
}

if($('#innovswipe').length > 0){ // 현장 혁신정보
	var innovswipe = new Swiper('#innovswipe', {
		// slidesPerView: 1.945,
		slidesPerView: 1.5796,
		parallax: true,
		observer: true,
		observeParents: true,
		spaceBetween: 22
	});
}

if($('#brandswipe').length > 0){ // 브랜드 소개
	var bulletNames = [];
	$('#brandswipe').find('.swiper-slide').each(function(i){
		bulletNames.push( this.getAttribute('data-name') );
	});
	var brandswipe = new Swiper('#brandswipe', {
		allowTouchMove: true,
		pagination: {
			el: '.swiper-pagination',
			clickable: true,
			renderBullet: function( index, className ){
				return '<span class="' + className + '"><span>' + bulletNames[ index ] + '</span></span>';
			},
		},
		on: {
			slideChange: function(){
				if( this.pagination.$el ){
					var active_dot = this.pagination.bullets[ this.activeIndex ];
					var $active_dot = $( active_dot );

					var leftPosition = $active_dot.position().left + $active_dot.parent().scrollLeft() + ( $active_dot.width() / 2 );
					leftPosition -= $( this.pagination.$el[0] ).innerWidth() / 2;

					$active_dot.parent().animate({ scrollLeft: leftPosition }, 200);
				}
			},
			init: function(){
				this.pagination.update();
				this.snapGrid = this.slidesGrid.slice(0);
			},
			resize: function(){
				this.pagination.update();
				this.snapGrid = this.slidesGrid.slice(0);
			},
			transitionStart: function (){
				brandswipe.update();
			}
		}
	})
}



