var Observable = require("FuseJS/Observable");
var Backend = require("./ProBackend");

var promotion = Observable();

Backend.getPromotion()
  .then(function(newHikes){
    promotion.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });

module.exports = {
    promotion: promotion
};
