var Observable = require("FuseJS/Observable");
var re = Observable();
var day = new Date();
var day1 = "";

// 1~9일까지는 01~09로 표현하기
if(day.getDate() < 10){
  day1 = ""+day.getFullYear() + (day.getMonth()+1) + "0" + day.getDate();
}
else if(day.getDate() >= 10){
  day1 = ""+day.getFullYear() + (day.getMonth()+1) + day.getDate();
}

// findUrl : 기상청 데이터 파싱
var findUrl = "http://newsky2.kma.go.kr/service/SecndSrtpdFrcstInfoService2/ForecastSpaceData"
+"?ServiceKey=FrFOr7SFkyzaor2OnmB%2FkbhSv5SolKXw113M%2BKGMAJihvh6KCBvPK6F9o5Vj%2BfwNcvbCiJ6ugvt6EO9qYB2gXQ%3D%3D"
+"&base_date="+day1
+"&base_time=0500&nx=98&ny=76&numOfRows=13&_type=json";

function  showRe(arg){
  day = new Date();
  //console.log(re.category);
   // console.log(day.getHours());
   // console.log(day.getMinutes());
  console.log(day1);
  console.log(arg.data.category);
  // console.log(arg.data.fcstValue);

// 	var res = arg.data;
// 	router.push("articlePage",res);
}

function ser(){
	fetch(findUrl)
	.then(function(response){
		return response.json();
	}).then(function(result){
		re.replaceAll(result.response.body.items.item);
	});
}

ser();

module.exports = {
	ser: ser,
	re: re,
	showRe: showRe
};
