
#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if (temp >= 35)
    {
        cout << "Very Hot";
    }
    else if (temp >= 25)
    {
        cout << "Hot";
    }
    else if (temp >= 15)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Cold";
    }

    return 0;
}

