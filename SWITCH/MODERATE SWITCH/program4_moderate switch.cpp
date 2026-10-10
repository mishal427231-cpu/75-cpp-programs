
#include <iostream>
using namespace std;

int main()
{
    char grade;

    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
            cout << "Excellent";
            break;

        case 'B':
            cout << "Very Good";
            break;

        case 'C':
            cout << "Good";
            break;

        case 'D':
            cout << "Needs Improvement";
            break;

        case 'F':
            cout << "Failed";
            break;

        default:
            cout << "Invalid grade";
    }

    return 0;
}

