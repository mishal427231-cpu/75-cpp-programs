
#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Excellent";
    }
    else if (marks >= 75)
    {
        cout << "Good";
    }
    else if (marks >= 50)
    {
        cout << "Average";
    }
    else
    {
        cout << "Poor";
    }

    return 0;
}

