// 4.cpp 让用户输入其年龄， 显示该年龄包含多少个月
#include <iostream>
using namespace std;

int main()
{
    int age ;
    cout << "输入你的年龄：" ;
    cin >> age;
    cout << "该年龄包含" << age * 12 << "月" << endl;
    return 0;
}
