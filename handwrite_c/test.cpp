#include<iostream>
#include"data.h"
#include "distance_angle_cal.h"

using namespace std;


int main()
{
    cout << "testing class data ---------" << endl;
    data test_data(10.0, 20.0);
    test_data.display();

    cout << "testing distance_cal function ----------" << endl;
    double test_x1 = 122.446;
    double test_y1 = 28.999;
    double test_x2 = 122.498;
    double test_y2 = 29.004;
    cout << distance_cal(test_x1, test_y1, test_x2, test_y2) << endl;



    cout << "testing angle_cal function--------" << endl;
    cout << angle_cal(test_x1, test_x2, test_y1, test_y2) <<endl;
    cout << "north direction test!  " << angle_cal(30.0, 20.0, 30.0, 40.0) <<endl;  // 正北
    return 0;
}