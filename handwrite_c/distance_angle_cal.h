#include<math.h>


/*
*  根据两车的经纬度信息计算两车之间的距离以及后车相对与前车的方向角；
*/



/*
* 计算距离 -- Haversin 计算算法
*/

const double pi = 3.1416;

double distance_cal(double x1, double y1, double x2, double y2)
{
  double sub_x = x1 - x2;
  double sub_y = y1 - y2;
  const int R = 6371;
  const double C = 2 * pi / 180;
  double distance =  C * R * asin(sqrt(pow(sin(sub_y/2), 2) + cos(y1)*cos(y2)*pow(sin(sub_x/2), 2)));
  return distance;
}

double angle_cal(double x1, double y1, double x2, double y2)
{

}
