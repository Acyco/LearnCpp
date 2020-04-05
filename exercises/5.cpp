// 5.cpp 摄氏度转华氏温度值
#include <iostream>
using namespace std;

int transform (int);

int main()
{
    int a;
    cout << "Please enter a Celsius values: ";
    cin >> a;
    int b = transform(a);
    cout << a << " degrees Celsius is " << b << " degrees Fahrenheit." << endl;
    return 0;
}


int transform(int a)
{
    return 1.8*a + 32;
}


