/*

    Print the Following Star Rectangle Patterns...

    1 2 3 4
    1 2 3 4
    1 2 3 4
    1 2 3 4

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
            if (n >= 1 && n <= 26)
            
            cout << (char)(j + 64) << " ";
        }
            cout << endl;
    }

    return 0;
}