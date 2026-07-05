// WAP to check if a given number is prime or not...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    int count = 0;

    cout << "\nEnter the No : ";

    cin >> no;

    for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    {

        if (no % i == 0) count++;
    }

    if(count == 2) cout << endl << no << " is a Prime No...";

    else cout << endl << no << " is not a Prime No...";

    return 0;
}