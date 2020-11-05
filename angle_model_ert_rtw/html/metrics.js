function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtU"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\angle_model_ert_rtw\\angle_model.c",
	size: 32};
	 this.metricsArray.var["rtY"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\angle_model_ert_rtw\\angle_model.c",
	size: 8};
	 this.metricsArray.fcn["angle_model_initialize"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\angle_model_ert_rtw\\angle_model.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["angle_model_step"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\angle_model_ert_rtw\\angle_model.c",
	stack: 48,
	stackTotal: 48};
	 this.metricsArray.fcn["angle_model_terminate"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\angle_model_ert_rtw\\angle_model.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["asin"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["cos"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
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
