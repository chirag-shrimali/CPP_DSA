// Take Positive Integer Input and tell if it is divisible by 5 or not...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no % 5 == 0 && no > 0)
    {
        cout << endl << no << " is Divisible by 5...";
    }

    if (no % 5 != 0 && no > 0)
    {
        cout << endl << no << " is not Divisible by 5...";
    }

    if(no <= 0)
    {
        cout << "\nInvalid Choice Of Selection!!";
    }

    return 0;
}