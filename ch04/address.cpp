// address.cpp -- using the & operator to find addresses.
// p 98 l 4.14     4.7 指针和自由存储空间
#include <iostream>
int main()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
    // NOTE: you many need to use unsigned (&donuts)
    // and unsigned (&cpus)
    
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    return 0;
}
