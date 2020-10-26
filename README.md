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

[matlib下载安装教程](http://www.360doc.com/content/16/1005/11/27698033_595899862.shtml)  
[vscode 环境搭建](https://www.cnblogs.com/baihualiaoluan/p/10661669.html)  
[haversin 算法](https://www.cnblogs.com/zhoug2020/p/8993750.html)  