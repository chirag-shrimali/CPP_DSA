/*

    Print the Following Star Cross(Odd Value Only) Patterns...

    *       *
      *   *
        *
      *   *
    *       *

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value of N : ";

    cin >> n;

    for (int i = 1; i <= n; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1; j <= n; j++)
        {

            if (i == 1 || j == 1 || i == n || j == n)

                cout << "* ";

            else

                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}