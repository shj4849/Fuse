var Context = require("Modules/Context");

function cancel(){
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}
function goHike(arg){
  var hike = arg.data;
  router.push("product",hike);
}
module.exports = {
    vac: Context.vaccine,
    cancel: cancel,
    goHike: goHike
};
