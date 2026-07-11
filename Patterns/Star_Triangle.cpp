/*

    Print the Following Star Rectangle Patterns...

    *
    * *
    * * *
    * * * *

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value Of N : ";

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}