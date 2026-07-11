/*

    Print the Following Star Rectangle Patterns...

    a a a a
    B B B B
    c c c c
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

    for(int i = 1 ; i <= n ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= n ; j++)
        {
            if ((n >= 1 && n <= 26) and (i % 2 == 0))

            cout << (char)(i + 64) << " ";

            else

            cout << (char)(i + 96) << " ";
        }
            cout << endl;
    }

    return 0;
}