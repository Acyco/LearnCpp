// assgn_st.cpp -- assigning structures.
// p91 l4.12  4.4.4 其他结构属性
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bouquet =
    {
        "sumflowers",
        0.20,
        12.49
    };

    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $";
    cout << bouquet.price << endl;

    choice = bouquet; // assign one structure to another.
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << endl;
    return 0;
}
