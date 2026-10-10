
#include <iostream>
using namespace std;

int main()
{
    int pin, amount;
    int balance = 10000;

    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin == 1234)
    {
        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            cout << "Withdrawal successful!" << endl;
            cout << "Remaining balance: " << balance - amount;
        }
        else
        {
            cout << "Insufficient balance.";
        }
    }
    else
    {
        cout << "Incorrect PIN.";
    }

    return 0;
}

