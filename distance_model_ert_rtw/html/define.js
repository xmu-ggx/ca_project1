function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:36,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:72,type:"fcn"};
this.def["rtU"] = {file: "distance_model_c.html",line:22,type:"var"};
this.def["rtY"] = {file: "distance_model_c.html",line:25,type:"var"};
this.def["rtM_"] = {file: "distance_model_c.html",line:28,type:"var"};
this.def["rtM"] = {file: "distance_model_c.html",line:29,type:"var"};
this.def["distance_model_step"] = {file: "distance_model_c.html",line:32,type:"fcn"};
this.def["distance_model_initialize"] = {file: "distance_model_c.html",line:96,type:"fcn"};
this.def["distance_model_terminate"] = {file: "distance_model_c.html",line:105,type:"fcn"};
this.def["RT_MODEL"] = {file: "distance_model_h.html",line:37,type:"type"};
this.def["ExtU"] = {file: "distance_model_h.html",line:45,type:"type"};
this.def["ExtY"] = {file: "distance_model_h.html",line:50,type:"type"};
this.def["BuiltInDTypeId"] = {file: "builtin_typeid_types_h.html",line:35,type:"type"};
this.def["DTypeId"] = {file: "builtin_typeid_types_h.html",line:40,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["rtBlockSignals"] = {file: "distance_model_capi_c.html",line:41,type:"var"};
this.def["rtBlockParameters"] = {file: "distance_model_capi_c.html",line:54,type:"var"};
this.def["rtModelParameters"] = {file: "distance_model_capi_c.html",line:64,type:"var"};
this.def["rtDataAddrMap"] = {file: "distance_model_capi_c.html",line:69,type:"var"};
this.def["rtVarDimsAddrMap"] = {file: "distance_model_capi_c.html",line:70,type:"var"};
this.def["rtDataTypeMap"] = {file: "distance_model_capi_c.html",line:73,type:"var"};
this.def["rtElementMap"] = {file: "distance_model_capi_c.html",line:86,type:"var"};
this.def["rtDimensionMap"] = {file: "distance_model_capi_c.html",line:92,type:"var"};
this.def["rtDimensionArray"] = {file: "distance_model_capi_c.html",line:100,type:"var"};
this.def["rtFixPtMap"] = {file: "distance_model_capi_c.html",line:103,type:"var"};
this.def["rtSampleTimeMap"] = {file: "distance_model_capi_c.html",line:109,type:"var"};
this.def["mmiStatic"] = {file: "distance_model_capi_c.html",line:116,type:"var"};
this.def["distance_model_GetCAPIStaticMap"] = {file: "distance_model_capi_c.html",line:150,type:"fcn"};
this.def["distance_model_InitializeDataMapInfo"] = {file: "distance_model_capi_c.html",line:158,type:"fcn"};
this.def["distance_model_host_InitializeDataMapInfo"] = {file: "distance_model_capi_c.html",line:190,type:"fcn"};
this.def["distance_model_host_DataMapInfo_T"] = {file: "distance_model_capi_host_h.html",line:9,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["distance_model_c.html"] = "../distance_model.c";
	this.html2Root["distance_model_c.html"] = "distance_model_c.html";
	this.html2SrcPath["distance_model_h.html"] = "../distance_model.h";
	this.html2Root["distance_model_h.html"] = "distance_model_h.html";
	this.html2SrcPath["builtin_typeid_types_h.html"] = "../builtin_typeid_types.h";
	this.html2Root["builtin_typeid_types_h.html"] = "builtin_typeid_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["distance_model_capi_c.html"] = "../distance_model_capi.c";
	this.html2Root["distance_model_capi_c.html"] = "distance_model_capi_c.html";
	this.html2SrcPath["distance_model_capi_h.html"] = "../distance_model_capi.h";
	this.html2Root["distance_model_capi_h.html"] = "distance_model_capi_h.html";
	this.html2SrcPath["distance_model_capi_host_h.html"] = "../distance_model_capi_host.h";
	this.html2Root["distance_model_capi_host_h.html"] = "distance_model_capi_host_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","distance_model_c.html","distance_model_h.html","builtin_typeid_types_h.html","rtwtypes_h.html","distance_model_capi_c.html","distance_model_capi_h.html","distance_model_capi_host_h.html"];
