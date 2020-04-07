// instr3.cpp -- reading more than one word with get() & get()  
// p80 4.2.4 每次读取一行字符串输入
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name,ArSize).get();   // read string, newline.
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}

