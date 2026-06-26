// Take Positive Integer input and tell if it is Odd Or Even...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no < 0) // -2 < 0
    {
        cout << "\nInvalid Number Selection!!!";
    }

    if(no % 2 == 0 && no >= 0) // 5 % 2(1) == 0 --> 1 == 0 (false --> 0) 
    {
        cout << endl << no << " is an Even No...";
    }

    if(no % 2 != 0 && no >= 0)
    {
        cout << endl << no << " is an Odd No...";
    }

    return 0;
}