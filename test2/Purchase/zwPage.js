var Context = require("Modules/Context");

function goHike(arg){
  var hike = arg.data;
  router.push("product",hike);
}

function cancel(){
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

module.exports = {  // 외부에서 접근이 가능하도록 내보내기
    zw: Context.zwcad,
    goHike: goHike,
    cancel: cancel
};
