
#include <iostream>
using namespace std;

int main()
{
    float amount, discount, total;

    cout << "Enter shopping amount: ";
    cin >> amount;

    if (amount >= 10000)
    {
        discount = amount * 0.20;
    }
    else if (amount >= 5000)
    {
        discount = amount * 0.10;
    }
    else
    {
        discount = 0;
    }

    total = amount - discount;

    cout << "Discount = Rs. " << discount << endl;
    cout << "Final Amount = Rs. " << total;

    return 0;
}
