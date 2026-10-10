
#include <iostream>
using namespace std;

int main()
{
    int age, salary;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 21)
    {
        cout << "Enter monthly salary: ";
        cin >> salary;

        if (salary >= 40000)
        {
            cout << "You are eligible for the loan.";
        }
        else
        {
            cout << "Your salary is too low.";
        }
    }
    else
    {
        cout << "You must be at least 21 years old.";
    }

    return 0;
}

