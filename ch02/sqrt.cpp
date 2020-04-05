// sqrt.cpp -- using the sqrt() function.  p28  函数
#include <iostream>
#include <cmath> // or math.h  导入头文件 

int main()
{
    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;
    return 0;
}
