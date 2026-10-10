
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Sum = " << a + b;
            break;

        case 2:
            cout << "Difference = " << a - b;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
