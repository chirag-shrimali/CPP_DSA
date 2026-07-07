// Take 'n' as an input from user and print the following sequence...

/*

    1
    n
    2
    n - 1
    3
    n - 2

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    // for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1

    //     cout << i;

    // for (int i = no ; i >= 1 ; i--) // i-- // i -= 1 // i = i - 1

    //     cout << i;

    // 1st Way ----------------------------------------------------------------------------------

    // int i = 1;

    // int j = no;

    // while (i <= no)
    // {
    //     cout << i << " " << j << " ";

    //     i++;
        
    //     j--;
    // }

    // 2nd Way ----------------------------------------------------------------------------------

    for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    {
        cout << i << " " << (no - i + 1) << " ";
    }

    return 0;
}