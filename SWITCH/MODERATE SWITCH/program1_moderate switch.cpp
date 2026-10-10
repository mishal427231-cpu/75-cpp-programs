
#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Answer = " << a + b;
            break;

        case 2:
            cout << "Answer = " << a - b;
            break;

        case 3:
            cout << "Answer = " << a * b;
            break;

        case 4:
            if (b != 0)
            {
                cout << "Answer = " << a / b;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

