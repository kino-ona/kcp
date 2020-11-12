$(document).ready(function() {
});
if($('#kvswipe').length > 0){
	var mainswipe = new Swiper('#kvswipe', {
		direction: 'vertical',
		loop: true,
		autoHeight: true,
		parallax: true,
		observer: true,
		observeParents: true,
		pagination: {
			el: '.kvpage .swiper-pagination',
			type: 'progressbar',
		},
		navigation: {
			nextEl: '.kvnavi .swiper-button-next',
			prevEl: '.kvnavi .swiper-button-prev',
		},
		speed: 800,
		autoplay: {
			delay: 2200,
			disableOnInteraction: false,
		},
	});

	var cur = mainswipe.realIndex + 1,
			total = $('#kvswipe').find('.swiper-slide').not('.swiper-slide-duplicate').length;

	var cur = (cur < 10) ? '0' + cur : cur;
	var total = (total < 10) ? '0' + total : total;
	$('.keyvisual').find('.swiper-counter').append('<span class=cur>' + cur + '</span> <span class=total> / ' + total + '</span>')
	mainswipe.on('slideChange', function () {
		var cur = mainswipe.realIndex + 1,
				cur = (cur < 10) ? '0' + cur : cur;
		$('.keyvisual').find('.swiper-counter .cur').html(cur);

		$('.keyvisual .kvdesc_area .info').removeClass('show');
		$('.keyvisual .kvdesc_area').find('.info').each(function(i){
			if($(this).attr('data-slide-txt') == cur) {
				$(this).addClass('show');
			}
		});
	});

	$(window).resize(function (){
		mainswipe.update();
	})
}

if($('#solutionswipe').length > 0){ // 솔루션
	var soluswipe = new Swiper('#solutionswipe', {
		slidesPerView: 'auto',
		centeredSlides: true,
		observer: true,
		observeParents: true,
		navigation: {
			nextEl: '#solutionswipe .swiper-button-next',
			prevEl: '#solutionswipe .swiper-button-prev',
		},
		spaceBetween: 140
	});
}

if($('#recommswipe').length > 0){ // 추천제품
	var recommswipe = new Swiper('#recommswipe', {
		loop: true,
		initialSlide: 1,
		slidesPerView: 4.01,
		centeredSlides: true,
		navigation: {
			nextEl: '#recommswipe .swiper-button-next',
			prevEl: '#recommswipe .swiper-button-prev',
		},
	});
	if($('#recommswipe .swiper-slide').length > 0){
		$('.recommand_sec .swiper-container').css({
			'background-size': $('#recommswipe .swiper-slide').width()
		});
	}
	$(window).resize(function (){
		var resW = setTimeout(function(){
			$('.recommand_sec .swiper-container').css({
				'background-size': $('#recommswipe .swiper-slide').width()
			});
			clearTimeout(resW);
		}, 300);
	})
}

if($('#innovswipe').length > 0){ // 현장 혁신정보
	var innovswipe = new Swiper('#innovswipe', {
		loop:true,
		slidesPerView: 4.65,
		parallax: true,
		observer: true,
		observeParents: true,
		centeredSlides: true,
		spaceBetween: 72,
		navigation: {
			nextEl: '.innov_sec .swiper-button-next',
			prevEl: '.innov_sec .swiper-button-prev',
		},
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

if($('.insight_sec').length > 0){ // 추천브랜드
	$('.insight_sec').find('.item').each(function(i){
		$(this).hover(function(){
			$(this).find('.logo img').attr("src", $(this).find('.logo img').attr("src").replace(".png", "_over.png"));
		}, function(){
			$(this).find('.logo img').attr("src", $(this).find('.logo img').attr("src").replace("_over.png", ".png"));
		});
	});
}




