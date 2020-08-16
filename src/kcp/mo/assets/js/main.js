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
