var promotion = [
  {
		id: 0,
		name: "AutoCAD & LT 제품 3년 사용을 최대 20% 할인 구매하세요!",
    file: "Assets/pro1.jpg",
    file1: "Assets/pro11.jpg"
	},
  {
		id: 1,
		name: "알약&랜섬쉴드 1+1 프로모션",
    file: "Assets/pro2.jpg",
    file1: "Assets/pro22.jpg"
	},
  {
		id: 2,
		name: "쌓여만 가는 영수증과 서류를 깔끔하게 해결 할 수 있는 솔루션이 있다면?",
    file: "Assets/pro3.jpg",
    file1: "Assets/pro33.jpg"
	},
  {
		id: 3,
		name: "알툴즈 통합팩 12.0 출시 제품 업그레이드 소개",
    file: "Assets/pro4.jpg",
    file1: "Assets/pro44.jpg"
	},
  {
		id: 4,
		name: "업무용 메일 여러분은 만족한가요?",
    file: "Assets/pro5.jpg",
    file1: "Assets/pro55.jpg"
	},
  {
		id: 5,
		name: "대학시설과 전용 CAD \"ZWCAD\"",
    file: "Assets/pro6.jpg",
    file1: "Assets/pro66.jpg"
	},
  {
		id: 6,
		name: "ZWCAD 프로모션",
    file: "Assets/pro7.jpg",
    file1: "Assets/pro77.jpg"
	},
  {
		id: 7,
		name: "우리 회사 협업 Office365 Teams로 해결 하세요!!",
    file: "Assets/pro8.jpg",
    file1: "Assets/pro88.jpg"
	}
];

function getPromotion(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(promotion);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}

module.exports = {
    getPromotion: getPromotion
};
