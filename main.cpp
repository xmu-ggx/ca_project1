#include <iostream>
#include "model_new.h"
#include "Data.h"
#include "client.h"

using namespace std;

int main()
{
    ExtU rtU;   //matlab -> c 输入结构体
    ExtY rtY;
    ExtY res;   //matlab -> c 输出结构体
    Data data;  // asn1 -> c  数据结构体

    // rtU.In1 = 122.446;
    // rtU.In2 = 28.999;
    // rtU.In3 = 122.498;
    // rtU.In4 = 29.004;

    cout << "please input the local data of two points: " << endl;
    cin >> rtU.In1 >> rtU.In2 >> rtU.In3 >> rtU.In4;
    res = model_new_step(rtU, rtY);  // 算法实现函数


    data.distane = res.Out1;
    data.angle = res.Out2;

    cout << '\t' << "angle: \t" << data.angle << "\t distance: \t" << data.distane << endl;

    send(data);

    return 0;
}


