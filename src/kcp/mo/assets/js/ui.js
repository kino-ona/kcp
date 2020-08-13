
$(document).ready(function () {
});

////// global common 
var lastSt = 0;
var didScroll;
$(window).scroll(function (e) {
  // didScroll = true;
  var st = $(this).scrollTop();
  winH = $(window).height();
  docH = $(document).height();

  if (st > 0) {
    $('.subhead').addClass('fixed')
  } else {
    $('.subhead').removeClass('fixed')
  }
  if ($('.fixed_menu').length > 0) {
    if (st > lastSt) {
      $('.fixed_menu').removeClass('show').addClass('hide')
    } else {
      $('.fixed_menu').removeClass('hide').addClass('show')
    }
  }
  lastSt = st;
});

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
// family site
function goFamilySite(select) {
  if (select.value != 'none') {
    window.open(select.value);
    select.value = 'none';
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
// login
var changePw = $('.member .btn_confirm');
var pwBox = $('.member .pw');
changePw.on('click', function () {
  if (!pwBox.hasClass('active')) {
    pwBox.addClass('active');
  }
});