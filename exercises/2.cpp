// 2.cpp 输入一个以long为单位的距离， 转换成码  1 long = 220码
#include <iostream>
using namespace std;

int main()
{
    int l;
    cout << "请输入一个long单位的距离：";
    cin >> l;
    int m = l * 220;
    cout << "转换成码：" << m << endl;
    return 0;
}
