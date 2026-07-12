/*

    Print the Following Floyd's Triangle Patterns...

    1
    2 3
    4 5 6
    7 8 9 10

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value Of N : ";

    cin >> n;

    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
}