var Context = require("Modules/Context");

function gointro(){
    router.push("intro");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gopur(){
    router.push("pur");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gopro(){
    router.push("promotion");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goauto(){
    router.push("auto");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gocom(){
    router.push("company");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
/*function gophone(){
    var phone = require("FuseJS/Phone");
    phone.call("+82 1063341076");
}*/

module.exports = {
    gointro: gointro,
    gopur: gopur,
    gopro: gopro,
    goauto: goauto,
    gocom: gocom
    //gophone: gophone
};
