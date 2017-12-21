var Observable = require('FuseJS/Observable');

var a;
var c =0;
var b = new Array();



function Page(name, image, location,stars){
// function Page(name, image, long, lat, location, no, stars, people){
	this.name = name;
	this.image = image;
	// this.long = "EAST LNG " + long;
	// this.lat = "NORTH LAT " + lat;
	this.location = location;
	// this.no = "NO. " + no;
	this.stars = stars;
	this.starsRest = 5 - stars;
	// this.people = people;
}

var pages = Observable();
pages.add(new Page("뽀로로", "Assets/1.png", "호기심 많은 꼬마 펭귄. 뭐든지 궁금한 건 참지 못하고 직접 해보고야 마는 성격으로, 항상 새로운 일에 씩씩하게 도전하는 용감한 친구예요.",5));
// pages.add(new Page("뽀로로", "Assets/1.png", 40, 34, "호기심 많은 꼬마 펭귄. 뭐든지 궁금한 건 참지 못하고 직접 해보고야 마는 성격으로, 항상 새로운 일에 씩씩하게 도전하는 용감한 친구예요.", 10241, 3, ["Assets/Faces/model-007.jpg", "Assets/Faces/model-005.jpg", "Assets/Faces/model-004.jpg", "Assets/Faces/model-003.jpg"]));
pages.add(new Page("패티", "Assets/2.png", "활발한 꼬마 펭귄. 명랑한 성격에 리더십이 강한 패티는 다른 친구들보다 운동을 잘해서 친구들이 모두 부러워한답니다.",4));
pages.add(new Page("크롱", "Assets/3.png", "재롱둥이 아기 공룡. 항상 뽀로로를 따라다니며 말썽을 부리는 사고뭉치지만, 아직은 알고 싶은 것도 많고, 하고 싶은 것도 많은 귀여운 막내랍니다.",3));
pages.add(new Page("포비", "Assets/4.png", "듬직한 꼬마 백곰. 커다란 덩치만큼 마음도 넓어 친구들이 어려울 때마다 제일 먼저 도와주는 마음씨 착한 친구랍니다.",5));
pages.add(new Page("에디", "Assets/5.png", "영리한 발명왕 꼬마 여우. 에디가 만들어 내는 발명품들은 항상 크고 작은 사건을 일으키지만, 친구들에게 멋진 추억을 안겨 준답니다.",5));
pages.add(new Page("로디", "Assets/6.png", "에디의 조수 로봇. 로봇이기 때문에 친구들과 다르다는 것에 실망하기도 하지만, 항상 사이좋게 친구들과 어울려 지낸답니다.",4));
pages.add(new Page("해리", "Assets/7.png", "노래하기를 좋아하는 벌새. 눈치가 ㅉ없어 친구들을 곤란에 빠트리기도 하지만, 특유의 밝고 명랑한 분위기로 친구들을 즐겁게 만들어 준답니다.",4));
pages.add(new Page("통통이", "Assets/8.png", "신기한 마법사 용. 마법 지팡이를 이용해 뽀로로와 친구들을 멋진 마법의 세계로 초대하기도 하고, 커다랗게 변신해 하늘을 나는 멋진 친구예요.",3));
pages.add(new Page("루피", "Assets/9.png", "다정한 꼬마 비버. 요리하기를 좋아하는 상냥한 성격의 루피는 친구들과 맛있는 음식을 나누어 먹는 것을 가장 좋아합니다.",4));



var pagesView = pages.map(function(item, index){
	return {
		item: item,
		index: index
	};
});

module.exports = {
	pagesView: pagesView
};
