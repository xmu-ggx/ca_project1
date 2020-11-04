function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["distance_model_capi.c:mmiStatic"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model_capi.c",
	size: 157};
	 this.metricsArray.var["distance_model_capi.c:rtDataAddrMap"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model_capi.c",
	size: 8};
	 this.metricsArray.var["distance_model_capi.c:rtVarDimsAddrMap"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model_capi.c",
	size: 8};
	 this.metricsArray.var["rtM_"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	size: 73};
	 this.metricsArray.var["rtU"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	size: 32};
	 this.metricsArray.var["rtY"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	size: 8};
	 this.metricsArray.fcn["asin"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["cos"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["distance_model_GetCAPIStaticMap"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model_capi.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["distance_model_InitializeDataMapInfo"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model_capi.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["distance_model_initialize"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["distance_model_step"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	stack: 16,
	stackTotal: 16};
	 this.metricsArray.fcn["distance_model_terminate"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\distance_model_ert_rtw\\distance_model.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["sin"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["sqrt"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data;}
}
	 CodeMetrics.instance = new CodeMetrics();
