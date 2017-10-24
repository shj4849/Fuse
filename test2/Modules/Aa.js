var list = [
  {
    name: "철수",
    image: "a.jpg",
  },
  {
    name: "영희",
    imgae: "b.jpg",
  }
];
function getlist(){
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(list);
        }, 500);
    });
}
module.exports = {
    getlist: getlist
};
