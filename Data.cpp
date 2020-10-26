/*
 * @Author: your name
 * @Date: 2020-10-26 18:55:45
 * @LastEditTime: 2020-10-26 19:19:01
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \ca_project1\Data.cpp
 */

#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(float x, float y)
{
    this ->longitude = x;
    this ->latitude = y;
}


Data::~Data()
{
    
}


int Data::dataShow()
{

    cout << "longitude" << this->longitude << "\t" << "latitude" << this->latitude << endl;
    return 0;
}