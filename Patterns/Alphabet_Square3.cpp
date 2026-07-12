/*

    Print the Following Alphabet Square Patterns...

    A A A A
    B B B B
    C C C C
    D D D D

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value of N : ";

    cin >> n;

    // 1st Way ---------------------------------------------------------

    // for(int i = 1 ; i <= n ; i++)
    // {
    //     for(int j =  65 ; j <= (65 + n - 1) ; j++)
    //     {
    //         cout << char(i + 64) << " ";
    //     }
    //         cout << endl;
    // }

    // 2nd Way ---------------------------------------------------------

    // for (int i = 1; i <= n; i++)
    // {
    //     for (char j = 'A'; j <= (char)(64 + n); j++)
    //     {
    //         cout << (char)(i + 64) << " ";
    //     }
    //     cout << endl;
    // }

    // 3rd Way ----------------------------------------------------------

    for(int i = 1 ; i <= n ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= n ; j++)
        {
            if (n >= 1 && n <= 26)

            cout << (char)(i + 64) << " ";
        }
            cout << endl;
    }

    return 0;
}