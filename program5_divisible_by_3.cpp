
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 3 == 0)
    {
        cout << "Number is divisible by 3";
    }
    else
    {
        cout << "Number is not divisible by 3";
    }

    return 0;
}
