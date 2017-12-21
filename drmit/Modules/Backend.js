// 모델에 해당하는 hikes 배열
var zwcad = [
  {
		id: 0,
		name: "ZWCAD 2017 LT(영구버전)",
		manufacturer : "ZWCAD KOREA",
		price: "1,243,000",
    file: "Assets/zwcad.jpg",
    file1: "Assets/zw.jpg"
	},
	{
		id: 1,
		name: "ZWCAD 2017(영구버전)",
		manufacturer : "ZWCAD KOREA",
		price: "1,864,500",
    file: "Assets/zwcad.jpg",
    file1: "Assets/zw.jpg"
	}
];
var ms = [
	{
		id: "Microsoft",
		name: "Office Professional 2016",
		manufacturer : "Microsoft",
		price: "624,100",
    file: "Assets/msofficepro.jpg",
    file1: "Assets/mspro.png"
	},
	{
		id: "Microsoft",
		name: "Office Standard 2016",
		manufacturer : "Microsoft",
		price: "458,000",
    file: "Assets/msofficest.jpg",
    file1: "Assets/mss.png"
	},
	{
		id: "Microsoft",
		name: "Win 10",
		manufacturer : "Microsoft",
		price: "236,500",
    file: "Assets/win10.jpg",
    file1: "Assets/win.png"
	},
	{
		id: "Microsoft",
		name: "Office 365 Business Premium",
		manufacturer : "Microsoft",
		price: "167,310",
    file: "Assets/365bp.jpg",
    file1: "Assets/365.png"
	},
	{
		id: "Microsoft",
		name: "Office 365 Business",
		manufacturer : "Microsoft",
		price: "117,480",
    file: "Assets/365b.jpg",
    file1: "Assets/365.png"
	},
	{
		id: "Microsoft",
		name: "Office 365 Essential",
		manufacturer : "Microsoft",
		price: "72,600",
    file: "Assets/365e.jpg",
    file1: "Assets/365.png"
	}
];
var adobe = [
	{
		id: 0,
		name: "Acrobat DC Professional(영구)",
		manufacturer : "Adobe",
		price: "715,000",
    file: "Assets/acrobatp.jpg",
    file1: "Assets/adobe.png"
	},
	{
		id: 1,
		name: "Acrobat DC Standard(영구)",
		manufacturer : "Adobe",
		price: "478,500",
    file: "Assets/acrobats.jpg",
    file1: "Assets/adobe.png"
	},
	{
		id: 2,
		name: "After Effect CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/af.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 3,
		name: "Premiere CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/cc.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 4,
		name: "InDesign CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/indesign.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 5,
		name: "Flash CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/flash.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 6,
		name: "Dream weaver CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/dw.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 7,
		name: "Illustrator CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/illustrator.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 8,
		name: "Photoshop CC 1Year",
		manufacturer : "Adobe",
		price: "847,000",
    file: "Assets/ps.jpg",
    file1: "Assets/acc.png"
	},
	{
		id: 9,
		name: "Adobe CCT 1Year",
		manufacturer : "Adobe",
		price: "1,661,000",
    file: "Assets/cct.jpg",
    file1: "Assets/acc.png"
	}
];
var autodesk = [
	{
		id: 0,
		name: "AutoCAD 2017 DTS(1년)",
		manufacturer : "AUTODESK",
		price: "1,880,000",
    file: "Assets/auto.jpg",
    file1: "Assets/cad.jpg"
	},
	{
		id: 1,
		name: "AutoCAD LT 2017 DTS(1년)",
		manufacturer : "AUTODESK",
		price: "510,000",
    file: "Assets/auto.jpg",
    file1: "Assets/cad.jpg"
	},
	{
		id: 2,
		name: "V-ray for SketchUp(영구버전)",
		manufacturer : "CHAOSGROUP",
		price: "1,320,000",
    file: "Assets/sketchup.jpg",
    file1: "Assets/vray.png"
	},
	{
		id: 3,
		name: "V-ray for Maya(영구버전)",
		manufacturer : "CHAOSGROUP",
		price: "1,573,000",
    file: "Assets/maya.jpg",
    file1: "Assets/vray.png"
	},
	{
		id: 4,
		name: "V-ray for 3ds Max(영구버전)",
		manufacturer : "CHAOSGROUP",
		price: "1,573,000",
    file: "Assets/3ds.jpg",
    file1: "Assets/vray.png"
	},
	{
		id: 5,
		name: "SketchUp Pro 2017(영구버전)",
		manufacturer : "Trimble",
		price: "990,000",
    file: "Assets/sketchuppro.jpg",
    file1: "Assets/sketchup.png"
	},
	{
		id: 6,
		name: "CADPOWER 2017(1년)",
		manufacturer : "(주)한국인프라",
		price: "330,000",
    file: "Assets/cadpower.jpg",
    file1: "Assets/cadp.png"
	},
	{
		id: 7,
		name: "CADPOWER 2017(영구버전)",
		manufacturer : "(주)한국인프라",
		price: "935,000",
    file: "Assets/cadpower.jpg",
    file1: "Assets/cadp.png"
	}
];
var hancom = [
	{
		id: 0,
		name: "이지포토 3 VP",
		manufacturer : "HANCOM",
		price: "199,100",
    file: "Assets/3vp.jpg",
    file1: "Assets/3vp1.JPG"
	},
	{
		id: 1,
		name: "한글 NEO",
		manufacturer : "HANCOM",
		price: "333,080",
    file: "Assets/han.jpg"
    //file1: "Assets/"
	},
	{
		id: 2,
		name: "한컴오피스 NEO",
		manufacturer : "HANCOM",
		price: "416,460",
    file: "Assets/han.jpg"
	}
];
var vaccine = [
	{
		id: 0,
		name: "ESET Endpoint AntiVirus",
		manufacturer : "ESET",
		price: "별도문의",
    file: "Assets/eset.jpg",
    file1: "Assets/eset1.jpg"
	},
	{
		id: 1,
		name: "AVG",
		manufacturer : "AVG",
		price: "별도문의",
    file: "Assets/avg.jpg",
    file1: "Assets/avg1.png"
	},
	{
		id: 2,
		name: "Avast Endpoint",
		manufacturer : "avast!",
		price: "별도문의",
    file: "Assets/avast.jpg",
    file1: "Assets/avast1.png"
	},
	{
		id: 3,
		name: "V3 Internet Security 9.0(5~29)",
		manufacturer : "AhnLab",
		price: "32,670",
    file: "Assets/v3.jpg",
    file1: "Assets/v31.png"
	},
	{
		id: 4,
		name: "Kaseprsky 10 for Workstation(7~10)",
		manufacturer : "KASPERSKYLab",
		price: "20,350",
    file: "Assets/kaseprsky.jpg",
    file1: "Assets/kaseprsky1.png"
	}
];
var solution = [
	{
		id: 0,
		name: "Internet Disk",
		manufacturer : "ESTsecurity",
		price: "별도문의",
    file: "Assets/internet.jpg",
    file1: "Assets/internet1.png"
	},
	{
		id: 1,
		name: "랜섬쉴드 PC",
		manufacturer : "ESTsecurity",
		price: "별도문의",
    file: "Assets/ransom.jpg",
    file1: "Assets/ransom1.png"
	},
	{
		id: 2,
		name: "랜섬쉴드 클라우드",
		manufacturer : "ESTsecurity",
		price: "별도문의",
    file: "Assets/ransomc.jpg",
    file1: "Assets/ransomc1.png"
	},
	{
		id: 3,
		name: "Secure Disk",
		manufacturer : "ESTsecurity",
		price: "별도문의",
    file: "Assets/secure.jpg",
    file1: "Assets/secure1.png"
	},
	{
		id: 4,
		name: "Project Management System",
		manufacturer : "ITFUTURES",
		price: "별도문의",
    file: "Assets/project.jpg",
    file1: "Assets/project1.png"
	},
	{
		id: 5,
		name: "Symantec Email Security Cloud",
		manufacturer : "Symantec",
		price: "별도문의",
    file: "Assets/symantec.jpg",
    file1: "Assets/symantec1.png"
	},
	{
		id: 6,
		name: "System Recovery 2013R2",
		manufacturer : "Symantec",
		price: "별도문의",
    file: "Assets/r2.jpg",
    file1: "Assets/r21.jpg"
	},
	{
		id: 7,
		name: "Backup Exec 15",
		manufacturer : "Symantec",
		price: "별도문의",
    file: "Assets/backup.jpg",
    file1: "Assets/backup1.jpg"
	},
	{
		id: 8,
		name: "ClouDoc",
		manufacturer : "NETiD",
		price: "별도문의",
    file: "Assets/cloudoc.jpg",
    file1: "Assets/cloudoc1.jpg"
	},
	{
		id: 9,
		name: "Daouoffice",
		manufacturer : "DAOU다우기술",
		price: "별도문의",
    file: "Assets/daou.jpg",
    file1: "Assets/daoua.JPG"
	},
	{
		id: 10,
		name: "NetClient",
		manufacturer : "DOCTORSOFT",
		price: "별도문의",
    file: "Assets/netclient.jpg",
    file1: "Assets/netclient1.png"
	}
];
// hikes 를 얻기 위한 인터페이스

function getZwcad(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(zwcad);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getMs(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(ms);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getAdobe(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(adobe);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getAuto(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(autodesk);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getHan(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(hancom);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getVac(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(vaccine);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
function getSol(){
    // Promise 오브젝트를 생성하여 리턴
    return new Promise(function(resolve, reject){
        setTimeout(function(){
            resolve(solution);     // Promise가 처리 완료를 알리는 resolve() 리턴 -> 요청한 곳 .then() 에서 수행
        }, 500);
    });
}
// hikes 중 특정 hike 를 업데이트 하는 인터페이스

module.exports = {
    getZwcad: getZwcad,
    getMs: getMs,
    getAdobe: getAdobe,
    getAuto: getAuto,
    getHan: getHan,
    getVac: getVac,
    getSol: getSol
};
