var Observable = require("FuseJS/Observable");

var profiles = Observable(
  { resource : "Assets/2017.png" },
  { resource : "Assets/2016.png" },
  { resource : "Assets/2015.png" },
  { resource : "Assets/2014.png" },
  { resource : "Assets/2013.png" },
  { resource : "Assets/2012.png" },
  { resource : "Assets/2011.png" },
  { resource : "Assets/2010.png" },
  { resource : "Assets/2009.png" },
  { resource : "Assets/2008.png" },
  { resource : "Assets/2007.png" },
  { resource : "Assets/2006.png" },
  { resource : "Assets/2005.png" },
  { resource : "Assets/2004.png" },
  { resource : "Assets/2003.png" },
  { resource : "Assets/2002.png" },
  { resource : "Assets/2001.png" }
);
function cancel(){
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

  module.exports = {
    profiles : profiles,
    cancel: cancel
  };
