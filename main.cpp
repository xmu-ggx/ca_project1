#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    struct Data test_data;
    test_data.distane = 30.0;
    test_data.angle = 50.0;
    cout << test_data.angle << endl;
    cout << test_data.distane << endl;

    return 0;
}


