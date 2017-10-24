var Context = require("Modules/Context");

var hike = this.Parameter;
var name = hike.map(function(x) { return x.name; });
var manufacturer = hike.map(function(x) { return x.manufacturer; });
var price = hike.map(function(x) { return x.price; });
var file = hike.map(function(x) { return x.file; });
var file1 = hike.map(function(x) { return x.file1; });

function cancel(){
    hike.value = hike.value;    // 의존하는 Observable 들의 값을 리셋하기 위해 hike 값을 새로고침
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

// 외부에서 접근이 가능하도록 내보내기
module.exports = {
    name: name,
    manufacturer: manufacturer,
    price: price,
    file: file,
    file1: file1,
    cancel: cancel
};
