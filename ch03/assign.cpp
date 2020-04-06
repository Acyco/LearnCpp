// assign.cpp -- type changes on initialization. p63 3.4.4 类型转换
#include <iostream>
int main()
{
    using namespace std;
    cout.setf(ios::fixed, ios::floatfield);
    float tree = 3;         // int converted to float 
    int guess(3.9832);      // double converted to int  // 小数部分会截取 （小数点后面就直接丢弃）
    int debt = 7.2E12;      // result not defined in C++;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl; /// 书上的是大约是1.6E09  但我的是 2147483647  编译的时候会发出警告 指出可能会丢掉数据
    return 0;
}
