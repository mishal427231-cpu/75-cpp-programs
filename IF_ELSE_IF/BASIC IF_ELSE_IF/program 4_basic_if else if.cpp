
#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if (temp < 20)
    {
        cout << "Cold";
    }
    else if (temp <= 30)
    {
        cout << "Normal";
    }
    else
    {
        cout << "Hot";
    }

    return 0;
}

