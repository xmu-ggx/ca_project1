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

/*
* 计算距离;
* 输入数据，北纬为正，东经为正；
* 第一组经纬度数据为目标车俩（以此车为基准点）,即假设第一个点为基准点进行方向角的求解；
*/
double angle_cal(double x1, double y1, double x2, double y2)
{
    const double angle2radian = pi / 180;
    const double radian2angle = 180 / pi;
    double angle_last;

    double dlo = x1 - x2;
    double dla = y1 - y2;

    x1 = x1 * angle2radian;
    y1 = y1 * angle2radian;
    x2 = x2 * angle2radian;
    y2 = y2 * angle2radian;

    double cos_c = cos(pi/2 - y2) * cos(pi/2 -y1) + sin(pi/2 -y2) * sin(pi/2 - y1) * cos(x2 - x1);
    double sin_c = sqrt(1 - pow(cos_c, 2));
    double angle = asin(sin(pi/2 - y2) * sin(x2 - x1) / sin_c) * radian2angle;
    

    if (dlo == 0 && dla > 0)  // 同经度，正南
    {
        angle_last = 180;
    }
    else if (dlo == 0 && dla < 0) // 同经度，正北
    {
        angle_last = 0;
    }
    else if (dla == 0 && dlo > 0) // 同纬度，正西
    {
        angle_last = 270;
    }
    else if (dla == 0 && dlo < 0)  //同纬度，正东
    {
        angle_last = 90;
    }
    else if (dla < 0 && dlo < 0)  //后点位于目标点为原点的第一象限
    {
        angle_last = angle;
    }
    else if (dla > 0 && dlo < 0) //第二象限
    {
        angle_last = 360 + angle;
    }
    else   //第三第四象限
    {
        angle_last = 180 - angle;
    }
    return angle_last;
}

