$(document).ready(function () {
	if($('.datepicker').length > 0) datepickerControl();
	if($('.video_util').length > 0) videoControl();

	// checkbox all 
	if($('.chkall').length > 0) {
		$('.chkall label').click(function() {
			if($('.chkall input:checkbox').is(':checked')) {
        $('.chkwrap:not(.chkall) input:checkbox').prop('checked', false)
			}else{
				$('.chkwrap:not(.chkall) input:checkbox').prop('checked', true)
			}
		});

		var chkleng = $('.chkwrap:not(.chkall)').length;
		$('.chkwrap:not(.chkall) input:checkbox').click(function() {
			if($('.chkwrap:not(.chkall) input:checkbox:checked').length == chkleng){
				$('.chkall input:checkbox').prop('checked', true)
			}else {
				$('.chkall input:checkbox').prop('checked', false)
			}
		});
	}
});

////// common menu open/close
var globalMenu = function() {
	if(!$('.gnb_menu').hasClass('open')){
		$('.gnb_menu').addClass('open');
		$('body').addClass('noscroll');
	}
}
var globalMenuClose = function() {
	if($('.gnb_menu').hasClass('open')){
		$('.gnb_menu').removeClass('open');
		$('body').removeClass('noscroll');
	}
}
////// global common 
var lastSt = 0;
$(window).scroll(function (e) {
	var st = $(this).scrollTop();

	if (st > 0) {
		$('.subhead').addClass('fixed')
		if($('.container.introduction').find('.details').length > 0) {
			$('.subhead').addClass('_view')
		}
	} else {
		$('.subhead').removeClass('fixed')
		if($('.container.introduction').find('.details').length > 0) {
			$('.subhead').removeClass('_view')
		}
	}
	if ($('.fixed_menu').length > 0) {
		if (st > lastSt) {
			$('.fixed_menu').removeClass('show').addClass('hide')
		} else {
			$('.fixed_menu').removeClass('hide').addClass('show')
		}
		if ($('.btn_sticky, .btn_wrap._fixed:not(.layer_foo)').length > 0) {
			if (st > lastSt) {
				$('.btn_sticky, .btn_wrap._fixed:not(.layer_foo)').removeClass('up')
			} else {
				$('.btn_sticky, .btn_wrap._fixed:not(.layer_foo)').addClass('up')
			}
		}
	}
	// if($('.back-top').length > 0) {
	// 	if ($('._fixed').length > 0) {$('.back-top').css({bottom:'85px'});
	// 		if ($('.fixed_menu').hasClass('show')) {$('.back-top').css({bottom:'135px'});
	// 		} else {$('.back-top').css({bottom:'85px'});}
	// 	} else {$('.back-top').css({bottom:'45px'});
	// 		if ($('.fixed_menu').hasClass('show')) {$('.back-top').css({bottom:'95px'});
	// 		} else {$('.back-top').css({bottom:'45px'});}
	// 	}
	// 	if ($(window).scrollTop() > 280) {$('.back-top').addClass('show');
	// 	} else {$('.back-top').removeClass('show');}
	// }
	lastSt = st;
});
//back-top
// $('.back-top').click( function(e) {
// 	e.preventDefault()
// 	$('html, body').animate({scrollTop:0}, 300);
// });
// accordion fn
$('.accord_wrap').each(function () { // default
	if (!$(this).hasClass('manualfn')) {
		if ($(this).hasClass('multiple')) {
			defaultAcc = new Accordion($(this), {
				allowMultiple: true,
			});
		} else {
			defaultAcc = new Accordion($(this), {
				allowMultiple: false,
			});
		}
	}
});
function accoSet(setId, multiTF, setFocus) {
	if (!setId) {
		setId = '.accord_wrap';
	} else {
		var setId = $('#' + setId);
	}
	if (!multiTF) multiTF = false;
	if (!setFocus) setFocus = 'acco_panel';

	defaultAcc = new Accordion(setId, {
		allowMultiple: multiTF,
		setFocus: setFocus
	});
}
// tab control
$('ul.tablist li button').click(function(){
	var tab_id = $(this).attr('data-tab');
	
	$('ul.tablist button').removeClass('current');
	$(this).parents('.tab_wrap').find('.tab-cont').removeClass('current');

	$(this).addClass('current');
	$("#"+tab_id).addClass('current');
});
// family site
function goFamilySite(select) {
	if (select.value != 'none') {
		window.open(select.value);
		// select.value = 'Familysite'; // 12.02 삭제
	} else {
		return;
	}
}

////// ui function
var searchlayer = function () {
	var schlayer = $('.search_layer');
	if (schlayer.length > 0) {
		if (!schlayer.hasClass('active')) {
			schlayer.addClass('active');
			$('body').addClass('noscroll');
		} else {
			schlayer.removeClass('active');
			$('body').removeClass('noscroll');
		}
	}
}

var fltayer = $('.filter_layer');
var filterShow = function () {
	if (fltayer.length > 0) {
		if (!fltayer.hasClass('active')) {
			fltayer.addClass('active');
			$('body').addClass('noscroll');
		} else {
			fltayer.removeClass('active');
			$('body').removeClass('noscroll');
		}
	}
}
var filterClose = function () {
	fltayer.removeClass('active');
	$('body').removeClass('noscroll');
}

////// sub
// rental
var rentType = $('.rent_write .rent_type');
var rentTypesel = function (type) {
	var $type = $(type).attr('data-type');
	var $this = $(type);
	if(!$this.hasClass('active')) {
		$('.btn_rent').removeClass('active')
		$this.addClass('active')
	}
	rentType.each(function(){ 
		if($(this).hasClass($type)) {
			$(this).addClass('active')
		}else {
			$(this).removeClass('active')
		}
	});
}

var videoControl = function(){
	$('.swiper-slide').each(function(i) {
		var media = $(this).find('video').get(0);
		var control = $(this).find('.btn_play');

		function controlShow() {
			$(control).animate({'opacity':1});
		}
		function controlHide() {
			$(control).animate({'opacity':0});
		}
		function playPauseMedia() {
			if(media.paused) {
				media.play();
				$(control).addClass('stop');
				$(this).find('.video_util').removeClass('cover');
				controlHide();
			} else {
				media.pause();
				$(control).removeClass('stop');
				$(this).find('.video_util').addClass('cover');
				controlShow();
			}
		}
		if($(control).length > 0) {
			$(control).click(playPauseMedia);
		}
		$(this).on('mouseenter mouseover',controlShow).on('mouseleave',function(){
			if(media.paused == false) {
				controlHide();
			}
		});
		$(this).on('focus',controlShow).on('blur',function(){
			if(media.paused == false) {
				controlHide();
			}
		});

		if($('.prd-thumbs').length > 0) {
			$('.prd-thumbs').find('.swiper-slide').on('click', function() {
				if($(control).length > 0) {
					if(media.paused == false) {
						media.pause();
						$(control).removeClass('stop');
						$(this).find('.video_util').addClass('cover');
						controlShow();
					}
				}
			});
		}
	});
}

var $slidemenu = $('.tab_navi');
var slideMenuSet = function(){
	$('.tab_navi ul li').each(function() {
		if($(this).hasClass('active')){
			var $element = $(this);
			$slidemenu.find('li').removeClass('active');
			$element.addClass('active');

			var hashOffset = $element.offset().left;
			var hashWidth = $element.outerWidth(true);
			var menuScrollLeft = $slidemenu.scrollLeft();
			var menuWidth = $slidemenu.width();

			var myScrollPos = hashOffset + (hashWidth / 2) + menuScrollLeft - (menuWidth / 2);
			$slidemenu.stop().animate({
				scrollLeft: myScrollPos - (menuWidth / 9)
			}, 0);
		}
	});

	// tab-navi control
	$('.tab_navi ul li a').click(function(){
		var $element = $(this);
		var hashOffset = $element.offset().left;
		var hashWidth = $element.outerWidth(true);
		var menuScrollLeft = $slidemenu.scrollLeft();
		var menuWidth = $slidemenu.width();
		var myScrollPos = hashOffset + (hashWidth / 2) + menuScrollLeft - (menuWidth / 2);

		var tab_id = $(this).attr('data-tab');
		$('.tab_navi ul li').removeClass('active');
		$(this).parents('.tab_wrap').find('.content').removeClass('active');
		$(this).parents('li').addClass('active');
		$slidemenu.stop().animate({
			scrollLeft: myScrollPos - (menuWidth / 9)
		}, 0);
		$('[data-conts='+ tab_id).addClass('active');

		$( 'html, body' ).animate( { scrollTop : 0 }, 400 );
		// return false;
	});

	$(window).scroll(function (e) {
		var st = $(this).scrollTop();
		tabwrap = $('.tab_wrap').offset().top;
		brndmain = $('.brand_info').outerHeight();

		if(!$('.brand_info').hasClass('sub')) {
			if (st > brndmain - 150) {
				$slidemenu.addClass('fixed');
			}else{
				$slidemenu.removeClass('fixed');
			}
		}else{
			if (st > tabwrap - 150) {
				$slidemenu.addClass('fixed');
			}else{
				$slidemenu.removeClass('fixed');
			}
		}

		lastSt = st;
	});
}
$(document).ready(function () {
	if($('.tab_navi').length > 0) slideMenuSet();
});

// brand > youtube iframe
function vodLink(url) {
	var $url = url;
	$('.vodpop').find('iframe')[0].src = 'https://www.youtube.com/embed/'+$url+'?rel=0';
}

if($('#recombnrswipe').length > 0){ // gnb 추천브랜드
	var headerBnrswipe = new Swiper('#recombnrswipe', {
		loop:true,
		slidesPerView: 1,
		observer: true,
		observeParents: true,
		centeredSlides: true,
		spaceBetween: 0,
		pagination: {
			el: '.swiper-pagination',
		},
		autoplay: {
			delay: 2200,
			disableOnInteraction: true,
		},
	});
}

