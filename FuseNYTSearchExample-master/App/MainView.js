var Observable = require("FuseJS/Observable");

var findUrl = "http://newsky2.kma.go.kr/service/SecndSrtpdFrcstInfoService2/ForecastSpaceData"
+"?ServiceKey=FrFOr7SFkyzaor2OnmB%2FkbhSv5SolKXw113M%2BKGMAJihvh6KCBvPK6F9o5Vj%2BfwNcvbCiJ6ugvt6EO9qYB2gXQ%3D%3D"
+"&base_date=20171201&base_time=0800&nx=98&ny=76&numOfRows=10&_type=json";

var re = Observable();

function  showRe(arg){
	var res = arg.data;

	router.push("articlePage",res);
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
