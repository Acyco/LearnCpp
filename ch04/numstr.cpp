// numstr.cpp -- following number input with line input. 
// p81 4.2.5 混合输入字符串和数字
#include <iostream>
int main()
{
    using namespace std;
    cout << "What year was your house biuilt?\n";
    int year;
//    cin >> year; // 根本没输入地址的机会 ， 读取年份后 后面cin.getline() 看到换行符 认为是一个空行，
    (cin >> year).get(); // or (cin >> year).get(ch)
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 90);
    cout << "Year biuilt: " << year << endl;
    cout << "Address " << address << endl;
    cout << "Done!" << endl;
    return 0;
}

