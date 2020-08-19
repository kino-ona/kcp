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

  var kvh = $('#kvswipe .figure').css('padding-top');
  $('#kvswipe .kvpage').css({
    'top': kvh
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
    initialSlide: 1,
		slidesPerView: 1.44,
    centeredSlides: true,
    // spaceBetween: 20,
    breakpoints: {
      768: {
        slidesPerView: 3,
      },
      740: {
        slidesPerView: 1.44,
      }
    }
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
    slidesPerView: 1.945,
  });
}





