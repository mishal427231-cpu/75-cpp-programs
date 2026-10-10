
#include <iostream>
using namespace std;

int main()
{
    int marks, test;

    cout << "Enter your marks percentage: ";
    cin >> marks;

    if (marks >= 60)
    {
        cout << "Enter entry test marks: ";
        cin >> test;

        if (test >= 50)
        {
            cout << "You are eligible for admission.";
        }
        else
        {
            cout << "Entry test marks are insufficient.";
        }
    }
    else
    {
        cout << "You do not meet the marks requirement.";
    }

    return 0;
}

