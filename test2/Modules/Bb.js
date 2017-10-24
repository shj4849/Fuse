var Observable = require("FuseJS/Observable");
var Aa = require("./Aa");

var list = Observable();

Aa.getlist()
  .then(function(newlist){
    list.replaceAll(newlist);
  })
  .catch(function(error){
    console.log("Couldn't get list: " + error);
  });

module.exports = {
    list: list
};
