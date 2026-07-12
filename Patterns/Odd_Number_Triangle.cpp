/*

    Print the Following Odd Number Triangle Patterns...

    1
    1 3
    1 3 5
    1 3 5 7

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
            cout << (j * 2) - 1 << " ";
        }
            cout << endl;
    }
    
}