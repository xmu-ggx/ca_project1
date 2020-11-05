#include <iostream>
#include "Data.h"
#include "model_new.h"

using namespace std;

int main()
{
    extern ExtU rtU;
    extern ExtY rtY;

    rtU.In1 = 122.446;
    rtU.In2 = 28.999;
    rtU.In3 = 122.498;
    rtU.In4 = 29.004;

    model_new_step();
    cout << rtY.Out1 << endl;
    cout << rtY.Out2 << endl;
    return 0;
}


