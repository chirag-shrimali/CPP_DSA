/*

    Print the Following Star Triangle Horizontally Flipped Patterns...

    * * * *
    * * *
    * *
    *

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value Of N : ";

    cin >> n;

    // 1st Way -------------------------------------------------------------

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 2nd Way -------------------------------------------------------------

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = (n - i + 1) ; j >= 1; j--)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 3rd Way -------------------------------------------------------------

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= (n - i + 1); j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 4th Way -------------------------------------------------------------

    int a = n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "* ";
        }
        a--; // a-- // a -= 1 // a = a - 1
        cout << endl;
    }
}