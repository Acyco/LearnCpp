// divide.cpp -- integer and floating-point division. p60 3.4.2 除法分支
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios::fixed, ios::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl; // 小数部分被丢弃    // 执行int除法
    cout << "Floating-point division: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;              // 
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl; // 在对不同类型进行运算， C++将把它们转换为同一种类型，（自动转换）
    cout << "double constants: 1e7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;         // 浮点常量 默认的情况是double类型
    cout << "float constants: 1e7/9.0f = ";
    cout << 1.e7f / 9.0f << endl; //如果是在ANSI C 之前的编译器不支持的C++ 可以 (float) 1.e7 / (float) 9.0
    return 0;
}
