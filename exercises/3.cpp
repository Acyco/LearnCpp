// 3.cpp -- 三个用户定义的函数 包含main()
#include <iostream>
using namespace std;

void a();
void b();

int main()
{
    a();
    a();
    b();
    b();
    return 0;
}

void a()
{
    cout << "Three blind mice" << endl;
}
    
void b()
{
    cout << "See how they run" << endl;
}
