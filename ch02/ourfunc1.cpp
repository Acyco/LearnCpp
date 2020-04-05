// ourfunc1.cpp -- repositioning the using directive. p33 2.4.5在多函数中使用using编译指令 
#include <iostream>
using namespace std;    // affects all function definitions in this file.
void simon(int);        // function prototype for simon().

int main()
{
    simon(3);           // call the simon() function.
    cout << "Pick an integer: ";
    int count;
    cin >> count;     
    simon(count);       // call it again.
    cout << "Done!" << endl;
    return 0;
}

void simon(int n)       // define the simon() function.
{
    cout << "Simon says touch your toes " << n << " times." << endl;
    // void functions don't need return statements.
}
