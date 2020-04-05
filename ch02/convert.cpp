// convert.cpp  -- converts stone to pounds. p32 2.4.4 用户定义的有返回值的函数。
#include <iostream>
int stonetolb(int); // function prototype.

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts){
    return 14 * sts;
}
