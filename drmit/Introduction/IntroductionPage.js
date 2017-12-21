var Context = require("Modules/Context1");

function cancel(){
    //hike.value = hike.value;    // 의존하는 Observable 들의 값을 리셋하기 위해 hike 값을 새로고침
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

function goHike(arg){
    // console.log(arg);
    var hike = arg.data;  // arg.data 는 Each 에서 선택된 데이터
    router.push("product1", hike);    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}

module.exports = {
    hikes: Context.product,
    goHike: goHike,
    cancel: cancel
};
