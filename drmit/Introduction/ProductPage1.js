var Context = require("Modules/Context1");

var hike = this.Parameter;
var name = hike.map(function(x) { return x.name; });
var file = hike.map(function(x) { return x.file; });

function cancel(){
    hike.value = hike.value;    // 의존하는 Observable 들의 값을 리셋하기 위해 hike 값을 새로고침
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

// 외부에서 접근이 가능하도록 내보내기
module.exports = {
    name: name,
    file: file,
    cancel: cancel
};
