
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num >= 10 && num <= 99)
    {
        cout << "It is a two-digit number";
    }

    return 0;
}

