# CA_project1

题目：根据经纬度坐标计算两车距离、方位角，并将计算结果进行传输。  
要求：  
一、Simulink原型搭建：用Simulink模块实现根据两车的经纬度坐标计算两车之间的距离、计算前车的方位角，通过Simulink仿真验证算法。  
二、C代码生成及功能实现：  
1.基于Simulink原型生成C代码，在Linux环境进行编译运行。  
2.将航向角、距离生成ASN.1格式的数据，利用ASN.1编译工具（有开源工具）生成C代码。  
3.将步骤2生成的C代码集成到（步骤1）C程序中，通过UDP方式实现计算结果（距离、方位角）自发、自收。  

开发语言：C++  
开发工具：VSCode  
编译管理：CMake  
代码管理：Git  
提交时间：2020.11.10  
提交方式：在 https://github.com/ 注册账号并上传提交  

[matlab下载安装教程](http://www.360doc.com/content/16/1005/11/27698033_595899862.shtml)  
[vscode 环境搭建](https://www.cnblogs.com/baihualiaoluan/p/10661669.html)  
  
[haversin算法 根据经纬度计算距离](https://www.cnblogs.com/zhoug2020/p/8993750.html)  
[GPS轨迹拟合--根据经纬度计算距离和方向角](https://blog.csdn.net/qq_39609900/article/details/85109265)  
[方位角的计算](https://wenku.baidu.com/view/ceec18c303768e9951e79b89680203d8cf2f6ac0.html)  
[算法参考--java](https://www.cnblogs.com/leejuan/p/5552460.html)  
[算法参考--c++](https://blog.csdn.net/yugemengjing/article/details/96708834)  
  
[simulink自动代码生成](https://blog.csdn.net/weixin_41695564/article/details/80751543)  
  
[ASN.1语法规则与类型概述](https://blog.csdn.net/mao834099514/article/details/109074661)  
[Ubuntu ASN1C实例分析](https://blog.csdn.net/hunzhangzui9837/article/details/85282923)  
  
[Tcp/Udp等协议的数据包格式](https://blog.csdn.net/kallen_ding/article/details/38490233)  
[socket 原理讲解](https://blog.csdn.net/pashanhu6402/article/details/96428887)  
[socket编程头文件和常用函数](https://blog.csdn.net/xsl1990/article/details/8270759)  
[ubuntu upd通讯实现](https://blog.csdn.net/zhngyue123/article/details/108900440)  
  
[Makefile Guide](https://blog.csdn.net/weixin_38391755/article/details/80380786)  
[Linux环境下make和makefile详解](https://www.cnblogs.com/skyofbitbit/p/3651380.html)  
 
