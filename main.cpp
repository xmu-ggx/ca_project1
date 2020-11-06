#include <iostream>
#include "model_new.h"
#include "Data.h"

using namespace std;

int main()
{
    ExtU rtU;   //matlab -> c 输入结构体
    ExtY rtY;
    ExtY res;   //matlab -> c 输出结构体
    Data data;  // asn1 -> c  数据结构体

    rtU.In1 = 122.446;
    rtU.In2 = 28.999;
    rtU.In3 = 122.498;
    rtU.In4 = 29.004;

    res = model_new_step(rtU, rtY);  // 算法实现函数
    cout << res.Out1 << endl;
    cout << res.Out2 << endl;

    data.distane = res.Out1;
    data.angle = res.Out2;

    cout << "data elements-------------" << endl;
    cout << data.distane << "\t" << data.angle << endl;

    

    return 0;
}


