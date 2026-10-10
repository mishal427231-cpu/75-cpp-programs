
#include <iostream>
using namespace std;

int main()
{
    int marks, income;

    cout << "Enter your marks percentage: ";
    cin >> marks;

    if (marks >= 85)
    {
        cout << "Enter monthly family income: ";
        cin >> income;

        if (income <= 50000)
        {
            cout << "You qualify for the scholarship.";
        }
        else
        {
            cout << "Income is too high for the scholarship.";
        }
    }
    else
    {
        cout << "Marks are not sufficient.";
    }

    return 0;
}

