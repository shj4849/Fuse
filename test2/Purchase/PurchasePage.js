var Context = require("Modules/Context");

function gozw(){
    router.push("zw");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goms(){
    router.push("ms");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goadobe(){
    router.push("adobe");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goauto(){
    router.push("auto");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gohan(){
    router.push("han");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function govac(){
    router.push("vac");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gosol(){
    router.push("sol");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function cancel(){
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

module.exports = {
    gozw: gozw,
    goms: goms,
    goauto: goauto,
    goadobe: goadobe,
    gohan: gohan,
    govac: govac,
    gosol: gosol,
    cancel: cancel
};
