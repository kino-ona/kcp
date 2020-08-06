$(document).ready(function() {


});

function goFamilySite(select)
{
  if(select.value!='none') {
      window.open(select.value);
      select.value = 'none';
  } else {
      return;
  }
}
