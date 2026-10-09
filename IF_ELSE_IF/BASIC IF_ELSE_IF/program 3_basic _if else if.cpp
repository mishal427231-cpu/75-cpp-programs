
#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        cout << "First number is greater";
    }
    else if (b > a)
    {
        cout << "Second number is greater";
    }
    else
    {
        cout << "Both numbers are equal";
    }

    return 0;
}

