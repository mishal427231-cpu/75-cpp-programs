
#include <iostream>
using namespace std;

int main()
{
    int choice;
    float side, length, width, radius;

    cout << "1. Area of Square" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Circle" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter side: ";
            cin >> side;
            cout << "Area = " << side * side;
            break;

        case 2:
            cout << "Enter length and width: ";
            cin >> length >> width;
            cout << "Area = " << length * width;
            break;

        case 3:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Area = " << 3.14 * radius * radius;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

