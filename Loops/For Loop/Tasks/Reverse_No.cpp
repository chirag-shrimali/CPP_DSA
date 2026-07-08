// Write a Program to reverse of a number...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no == 0) cout << 0;

    while (no != 0)
    {

        int rem = no % 10;

        cout << rem;
        
        no /= 10;

    }

    return 0;
}