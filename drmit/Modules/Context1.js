var Observable = require("FuseJS/Observable");
var Backend = require("./Backend1");

var product = Observable();

Backend.getProduct()
  .then(function(newHikes){
    product.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });

module.exports = {
    product: product
};
