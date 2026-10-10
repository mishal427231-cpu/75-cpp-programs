
#include <iostream>
using namespace std;

int main()
{
    int color;

    cout << "1. Red" << endl;
    cout << "2. Yellow" << endl;
    cout << "3. Green" << endl;

    cout << "Enter your choice: ";
    cin >> color;

    switch(color)
    {
        case 1:
            cout << "Stop";
            break;

        case 2:
            cout << "Wait";
            break;

        case 3:
            cout << "Go";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
