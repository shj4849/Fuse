var Observable = require("FuseJS/Observable");
var Backend = require("./Backend");

var zwcad = Observable();
var ms = Observable();
var adobe = Observable();
var autodesk = Observable();
var hancom = Observable();
var vaccine = Observable();
var solution = Observable();

// 앱 시작시 Backend 로 부터 hikes 데이터를 가져옴
Backend.getSol()
  .then(function(newHikes){
    solution.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getVac()
  .then(function(newHikes){
    vaccine.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getHan()
  .then(function(newHikes){
    hancom.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getAuto()
  .then(function(newHikes){
    autodesk.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getAdobe()
  .then(function(newHikes){
    adobe.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getMs()
  .then(function(newHikes){
    ms.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });
Backend.getZwcad()
  .then(function(newHikes){
    zwcad.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });

module.exports = {
    zwcad: zwcad,
    ms: ms,
    adobe: adobe,
    autodesk: autodesk,
    hancom: hancom,
    vaccine: vaccine,
    solution: solution
};
