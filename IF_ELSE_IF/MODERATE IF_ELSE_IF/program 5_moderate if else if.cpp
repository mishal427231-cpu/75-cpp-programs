
#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 10000)
    {
        cout << "Discount is 20%";
    }
    else if (amount >= 5000)
    {
        cout << "Discount is 10%";
    }
    else if (amount >= 2000)
    {
        cout << "Discount is 5%";
    }
    else
    {
        cout << "No discount";
    }

    return 0;
}

