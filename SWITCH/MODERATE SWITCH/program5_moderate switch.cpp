
#include <iostream>
using namespace std;

int main()
{
    int choice, quantity, price;

    cout << "1. Burger - Rs. 300" << endl;
    cout << "2. Pizza - Rs. 500" << endl;
    cout << "3. Sandwich - Rs. 200" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            price = 300;
            break;

        case 2:
            price = 500;
            break;

        case 3:
            price = 200;
            break;

        default:
            cout << "Invalid choice";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Total bill = Rs. " << price * quantity;

    return 0;
}

