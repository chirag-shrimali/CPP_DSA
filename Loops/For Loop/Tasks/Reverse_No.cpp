// Write a Program to reverse of a number...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    // 1st Way -------------------------------------------------------------

    // int no;

    // cout << "\nEnter the No : ";

    // cin >> no;

    // if (no == 0) cout << 0;

    // while (no != 0)
    // {

    //     int rem = no % 10;

    //     cout << rem;
        
    //     no /= 10;

    // }

    // 2nd Way -------------------------------------------------------------

    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no == 0) cout << 0;

    int rev = 0;

    while (no != 0)
    {

        int rem = no % 10;

        rev = (rev * 10) + rem;
        
        no /= 10;

    }

    cout << rev;

    return 0;
}