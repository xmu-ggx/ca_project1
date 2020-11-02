#include<iostream>

using namespace std;


class data
{
private:
    double longitude;
    double latitude;
public:
    data();
    data(double, double);
    ~data();
    void display();
};

data::data(/* args */)
{
}

data::data(double x, double y)
{
    longitude = x;
    latitude = y;
}

data::~data()
{
}


void data::display()
{
    cout << "longitude: " << longitude << "\t" << "latitude: " << latitude << endl;
    return;
}



