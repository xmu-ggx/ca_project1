function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.var["rtU"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\model_new_ert_rtw\\model_new.c",
	size: 32};
	 this.metricsArray.var["rtY"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\model_new_ert_rtw\\model_new.c",
	size: 16};
	 this.metricsArray.fcn["asin"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["cos"] = {file: "D:\\MATLAB\\R2016b\\sys\\lcc\\include\\math.h",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["model_new_initialize"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\model_new_ert_rtw\\model_new.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["model_new_step"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\model_new_ert_rtw\\model_new.c",
	stack: 48,
	stackTotal: 48};
	 this.metricsArray.fcn["model_new_terminate"] = {file: "C:\\Users\\lenovo\\Desktop\\ca_project1\\model_new_ert_rtw\\model_new.c",
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
