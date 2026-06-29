/*
    Take 3 Positive Integers as an input and print the Greatest of them...
*/

// Boiler - Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a , b , c;

    cout << "\nEnter the No1 : ";

    cin >> a;

    cout << "\nEnter the No2 : ";

    cin >> b;

    cout << "\nEnter the No3 : ";

    cin >> c;

    if(a >= b) 
    {
        if (a >= c) cout << endl << a << " is greatest of them...";

        else cout << endl << c << " is greatest of them...";
    }

    else // b >= a
    {
        if(b >= c) cout << endl << b << " is greatest of them...";

        else cout << endl << c << " is greatest of them...";
    }

    return 0;
}