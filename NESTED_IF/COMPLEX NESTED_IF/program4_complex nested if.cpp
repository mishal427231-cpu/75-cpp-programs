
#include <iostream>
using namespace std;

int main()
{
    int username, password;

    cout << "Enter username number: ";
    cin >> username;

    if (username == 123)
    {
        cout << "Enter password: ";
        cin >> password;

        if (password == 456)
        {
            cout << "Login successful.";
        }
        else
        {
            cout << "Incorrect password.";
        }
    }
    else
    {
        cout << "Incorrect username.";
    }

    return 0;
}

