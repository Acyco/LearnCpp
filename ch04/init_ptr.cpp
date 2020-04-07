// init_ptr.cpp -- initialize a pointer.
// p 101 l4.16 4.7.1 声明和初始化指针
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "Value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
        << "; address of pt = " << pt << endl;
    return 0;
}

