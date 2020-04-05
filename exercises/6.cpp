// 6.cpp 光年转换成天文单位。
#include <iostream>
using namespace std;

int transform(double);

int main(){
    double ly;
    cout <<"Enter the number of light years: ";
    cin >> ly;
    int au = transform(ly);
    cout << ly << " light years = " << au << " astronomical units." << endl;
    return 0;
}


int transform(double ly)
{
    return ly*63240;
}
