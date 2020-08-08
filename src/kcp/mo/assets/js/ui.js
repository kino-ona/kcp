$(document).ready(function() {


});



// global common
var lastSt = 0;
$(window).scroll(function(e) {
  var st = $(this).scrollTop();
  	winH = $(window).height();
  	docH = $(document).height();

    if (st > 1){
      $('.subhead').addClass('fixed')
    } else {
      $('.subhead').removeClass('fixed')
    }
    lastSt = st;
});

var searchlayer = function(){
  var schlayer = $('.search_layer');
  if(schlayer.length > 0){
    if(!schlayer.hasClass('active')) {
      schlayer.addClass('active');
      $('body').addClass('noscroll');
      $('.fixed_menu .mn03').addClass('active');
    }else{
      schlayer.removeClass('active');
      $('body').removeClass('noscroll');
      $('.fixed_menu .mn03').removeClass('active');
    }
  }
}

function goFamilySite(select) {
  if(select.value!='none') {
    window.open(select.value);
    select.value = 'none';
  } else {
    return;
  }
}
