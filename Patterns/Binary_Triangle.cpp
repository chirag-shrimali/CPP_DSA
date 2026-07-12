/*

    Print the Following Binary Triangle Patterns...

    1
    0 1
    1 0 1
    0 1 0 1

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
            if(i == j || (i % 2 != 0 && j % 2 != 0) || (i % 2 == 0 && j % 2 == 0))

            cout << "1 ";

            else
            
            cout << "0 ";
        }
            cout << endl;
    }
}