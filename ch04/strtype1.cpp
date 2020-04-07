// strtype1.cpp -- using the C++ string class
// p82 4.3 string简介
#include <iostream>
#include <string> // make string class available.
int main()
{
    using namespace std;
    char charr1[20];                // create an empty array.
    char charr2[20] = "jaguar";     // create an initialized array.
    string str1;                    // create an empty string object.
    string str2 = "panther";        // create an initialized string.
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind of feline: ";
    cin >> str1;            // use cin for input
    cout << "Here are some felindes:\n";
    cout << charr1 << " " << charr2 << " "
        << str1 << " " << str2  // use cout for ouput.
        << endl;
    cout << "The third letter in " << charr2 << " is "
        << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is "
        << str2[2] << endl;
    return 0;
}