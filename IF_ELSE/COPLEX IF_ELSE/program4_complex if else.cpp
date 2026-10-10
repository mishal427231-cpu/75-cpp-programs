
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, total;
    float percentage;

    cout << "Enter marks of three subjects: ";
    cin >> a >> b >> c;

    if (a < 0 || a > 100 || b < 0 || b > 100 || c < 0 || c > 100)
    {
        cout << "Invalid Marks";
    }
    else
    {
        total = a + b + c;
        percentage = total / 3.0;

        cout << "Total Marks = " << total << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (percentage >= 80)
        {
            cout << "Grade A";
        }
        else if (percentage >= 70)
        {
            cout << "Grade B";
        }
        else if (percentage >= 60)
        {
            cout << "Grade C";
        }
        else if (percentage >= 50)
        {
            cout << "Grade D";
        }
        else
        {
            cout << "Fail";
        }
    }

    return 0;
}
