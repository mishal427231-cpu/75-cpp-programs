
#include <iostream>
using namespace std;

int main()
{
    float salary, bonus, totalSalary;
    int years;

    cout << "Enter basic salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> years;

    if (salary < 0 || years < 0)
    {
        cout << "Invalid Input";
    }
    else if (years >= 10)
    {
        bonus = salary * 0.20;
        totalSalary = salary + bonus;

        cout << "Bonus = " << bonus << endl;
        cout << "Total Salary = " << totalSalary;
    }
    else if (years >= 5)
    {
        bonus = salary * 0.10;
        totalSalary = salary + bonus;

        cout << "Bonus = " << bonus << endl;
        cout << "Total Salary = " << totalSalary;
    }
    else
    {
        bonus = 0;
        totalSalary = salary;

        cout << "No Bonus" << endl;
        cout << "Total Salary = " << totalSalary;
    }

    return 0;
}
