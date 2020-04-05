// 7.cpp 输入小时数和分钟数 并显示
#include <iostream>
using namespace std;

void show (int,int);

int main()
{
    int hour,minute;
    cout << "Enter the number of hours: " ;
    cin >> hour;
    cout << "Enter the number of ninutes: ";
    cin >> minute;
    show(hour,minute);
    return 0;
}

void show (int hour, int minute)
{
    cout << "Time: " << hour << ":" << minute<< endl;
}
