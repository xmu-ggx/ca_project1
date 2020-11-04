function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["distance_model:28"] = "distance_model.c:39&distance_model.h:41";
	/* <Root>/In2 */
	this.urlHashMap["distance_model:29"] = "distance_model.c:47,60&distance_model.h:42";
	/* <Root>/In3 */
	this.urlHashMap["distance_model:30"] = "distance_model.c:40&distance_model.h:43";
	/* <Root>/In4 */
	this.urlHashMap["distance_model:31"] = "distance_model.c:48,61&distance_model.h:44";
	/* <Root>/Add */
	this.urlHashMap["distance_model:25"] = "distance_model.c:69";
	/* <Root>/Angle2radian */
	this.urlHashMap["distance_model:8"] = "distance_model.c:86";
	/* <Root>/Constant */
	this.urlHashMap["distance_model:10"] = "distance_model.c:87";
	/* <Root>/Math
Function */
	this.urlHashMap["distance_model:21"] = "distance_model.c:49,53";
	/* <Root>/Math
Function1 */
	this.urlHashMap["distance_model:22"] = "distance_model.c:68,71";
	/* <Root>/Product */
	this.urlHashMap["distance_model:11"] = "distance_model.c:89";
	/* <Root>/Product1 */
	this.urlHashMap["distance_model:12"] = "distance_model.c:46";
	/* <Root>/Product2 */
	this.urlHashMap["distance_model:17"] = "distance_model.c:41";
	/* <Root>/Product3 */
	this.urlHashMap["distance_model:18"] = "distance_model.c:62";
	/* <Root>/Radius of the earth */
	this.urlHashMap["distance_model:7"] = "distance_model.c:88";
	/* <Root>/Sqrt */
	this.urlHashMap["distance_model:13"] = "distance_model.c:67";
	/* <Root>/Subtract between latitude */
	this.urlHashMap["distance_model:6"] = "distance_model.c:63";
	/* <Root>/Subtract between longitude */
	this.urlHashMap["distance_model:5"] = "distance_model.c:42";
	/* <Root>/Trigonometric
Function */
	this.urlHashMap["distance_model:14"] = "distance_model.c:76,90";
	/* <Root>/Trigonometric
Function1 */
	this.urlHashMap["distance_model:19"] = "distance_model.c:37";
	/* <Root>/Trigonometric
Function2 */
	this.urlHashMap["distance_model:20"] = "distance_model.c:58";
	/* <Root>/Trigonometric
Function3 */
	this.urlHashMap["distance_model:23"] = "distance_model.c:50";
	/* <Root>/Trigonometric
Function4 */
	this.urlHashMap["distance_model:24"] = "distance_model.c:51";
	/* <Root>/constant  */
	this.urlHashMap["distance_model:15"] = "distance_model.c:38";
	/* <Root>/constant 1 */
	this.urlHashMap["distance_model:16"] = "distance_model.c:59";
	/* <Root>/Out1 */
	this.urlHashMap["distance_model:32"] = "distance_model.c:85&distance_model.h:49";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "distance_model"};
	this.sidHashMap["distance_model"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "distance_model:28"};
	this.sidHashMap["distance_model:28"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "distance_model:29"};
	this.sidHashMap["distance_model:29"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "distance_model:30"};
	this.sidHashMap["distance_model:30"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/In4"] = {sid: "distance_model:31"};
	this.sidHashMap["distance_model:31"] = {rtwname: "<Root>/In4"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "distance_model:25"};
	this.sidHashMap["distance_model:25"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Angle2radian"] = {sid: "distance_model:8"};
	this.sidHashMap["distance_model:8"] = {rtwname: "<Root>/Angle2radian"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "distance_model:10"};
	this.sidHashMap["distance_model:10"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Math Function"] = {sid: "distance_model:21"};
	this.sidHashMap["distance_model:21"] = {rtwname: "<Root>/Math Function"};
	this.rtwnameHashMap["<Root>/Math Function1"] = {sid: "distance_model:22"};
	this.sidHashMap["distance_model:22"] = {rtwname: "<Root>/Math Function1"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "distance_model:11"};
	this.sidHashMap["distance_model:11"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Product1"] = {sid: "distance_model:12"};
	this.sidHashMap["distance_model:12"] = {rtwname: "<Root>/Product1"};
	this.rtwnameHashMap["<Root>/Product2"] = {sid: "distance_model:17"};
	this.sidHashMap["distance_model:17"] = {rtwname: "<Root>/Product2"};
	this.rtwnameHashMap["<Root>/Product3"] = {sid: "distance_model:18"};
	this.sidHashMap["distance_model:18"] = {rtwname: "<Root>/Product3"};
	this.rtwnameHashMap["<Root>/Radius of the earth"] = {sid: "distance_model:7"};
	this.sidHashMap["distance_model:7"] = {rtwname: "<Root>/Radius of the earth"};
	this.rtwnameHashMap["<Root>/Sqrt"] = {sid: "distance_model:13"};
	this.sidHashMap["distance_model:13"] = {rtwname: "<Root>/Sqrt"};
	this.rtwnameHashMap["<Root>/Subtract between latitude"] = {sid: "distance_model:6"};
	this.sidHashMap["distance_model:6"] = {rtwname: "<Root>/Subtract between latitude"};
	this.rtwnameHashMap["<Root>/Subtract between longitude"] = {sid: "distance_model:5"};
	this.sidHashMap["distance_model:5"] = {rtwname: "<Root>/Subtract between longitude"};
	this.rtwnameHashMap["<Root>/Trigonometric Function"] = {sid: "distance_model:14"};
	this.sidHashMap["distance_model:14"] = {rtwname: "<Root>/Trigonometric Function"};
	this.rtwnameHashMap["<Root>/Trigonometric Function1"] = {sid: "distance_model:19"};
	this.sidHashMap["distance_model:19"] = {rtwname: "<Root>/Trigonometric Function1"};
	this.rtwnameHashMap["<Root>/Trigonometric Function2"] = {sid: "distance_model:20"};
	this.sidHashMap["distance_model:20"] = {rtwname: "<Root>/Trigonometric Function2"};
	this.rtwnameHashMap["<Root>/Trigonometric Function3"] = {sid: "distance_model:23"};
	this.sidHashMap["distance_model:23"] = {rtwname: "<Root>/Trigonometric Function3"};
	this.rtwnameHashMap["<Root>/Trigonometric Function4"] = {sid: "distance_model:24"};
	this.sidHashMap["distance_model:24"] = {rtwname: "<Root>/Trigonometric Function4"};
	this.rtwnameHashMap["<Root>/constant "] = {sid: "distance_model:15"};
	this.sidHashMap["distance_model:15"] = {rtwname: "<Root>/constant "};
	this.rtwnameHashMap["<Root>/constant 1"] = {sid: "distance_model:16"};
	this.sidHashMap["distance_model:16"] = {rtwname: "<Root>/constant 1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "distance_model:32"};
	this.sidHashMap["distance_model:32"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
