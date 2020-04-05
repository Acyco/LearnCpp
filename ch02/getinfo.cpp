// getinfo.cpp -- input and output  p24  2.3 其他C++语句
#include <iostream>

int main()
{
    using namespace std;
    
    int carrots;

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;  // C++ input 控制台输入
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}

