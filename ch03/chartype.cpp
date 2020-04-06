// chartype.cpp -- the char type. p48  3.1.8 char类型： 字符 和 小整型
#include <iostream>
int main()
{
    using namespace std;
    char ch;            // declare a char variable.

    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
    return 0;
}

