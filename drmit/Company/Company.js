//var Context = require("Modules/Context");
function gooverview(){
    router.push("overview");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goclient(){
    router.push("client");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gohistory(){
    router.push("history");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goorganization(){
    router.push("organization");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gocertification(){
    router.push("certification");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function goawards(){
    router.push("awards");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function gocontact(){
    router.push("contact");    // router.push() 로 원하는 경로로 이동, 두번째 인자를 통해 hike를 함께 전달하면 이동된 페이지에서 this.Parameter 로 접근하여 사용
}
function cancel(){
    router.goBack();    // router.goBack() 을 사용하여 뒤로가기 (이전에 push로 이동했기때문에 가능)
}

module.exports = {
    gooverview: gooverview,
    goclient: goclient,
    gohistory: gohistory,
    goorganization: goorganization,
    gocertification: gocertification,
    goawards: goawards,
    gocontact: gocontact,
    cancel: cancel
};
