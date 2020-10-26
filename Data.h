/*
 * @Author: your name
 * @Date: 2020-10-26 18:55:26
 * @LastEditTime: 2020-10-26 19:20:14
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \ca_project1\Data.h
 */

// 创建保存经纬度信息的类
// 经度：longitude; 纬度：latitude;
#include <iostream>
using namespace std;

class Data
{
    public:
            
        float longitude;
        float latitude;
        Data();
        Data(double , double);
        void display();

    private:      
};








Data::Data()
{
    cout << "moren gouzao" << endl;
}

Data::Data(double x, double y)
{
    cout << "daican gouzao" << endl;
    longitude = x;
    latitude = y;
}

void Data::display()
{
    cout << "longitude: " << longitude << "\t" << "latitude: " << latitude << endl;
    return;
}
