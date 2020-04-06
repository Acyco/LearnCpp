// modulus.cpp -- uses % operator to convert lbs to stone  p62 求模运算符
#include <iostream>
int main()
{
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;  // whole stone.   // 两个操作数的类型都是int 执行的是整数除法
    int pounds = lbs % Lbs_per_stn; // remainder in pounds.
    cout << lbs << " pounds are " << stone
        << " stone, " << pounds << "pound(s).\n";
    return 0;
}
