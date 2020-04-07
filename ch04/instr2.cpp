// instr2.cpp -- reading more than one word with getline  p79 4.2.4 每次读取一行字符串输入
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}

