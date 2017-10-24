var product = [
  {
		id: 0,
		name: "Adobe Creative Cloud",
    file: "Assets/adobe111.jpg",
	},
  {
		id: 1,
		name: "ZWCAD KOREA",
    file: "Assets/zw.jpg",
	},
  {
		id: 2,
		name: "MS Office365",
    file: "Assets/365111.jpg",
	},
  {
		id: 3,
		name: "한글과컴퓨터 ILA / ALA",
    file: "Assets/han111.png",
	},
  {
		id: 4,
		name: "Autodesk DTS",
    file: "Assets/auto111.png",
	}
];

function getProduct(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(product);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}

module.exports = {
    getProduct: getProduct
};
