/*

    Print the Following Alphabet Square Patterns...

    a b c d
    a b c d
    a b c d
    a b c d

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
    //     for(int j =  97 ; j <= (97 + n - 1) ; j++)
    //     {
    //         cout << char(j) << " ";
    //     }
    //         cout << endl;
    // }

    // 2nd Way ---------------------------------------------------------

    // for(int i = 1 ; i <= n ; i++)
    // {
    //     for(char j =  'a' ; j <= (char)(96 + n) ; j++)
    //     {
    //         cout << j << " ";
    //     }
    //         cout << endl;
    // }

    // 3rd Way ----------------------------------------------------------

    for(int i = 1 ; i <= n ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= n ; j++)
        {
            if (n >= 1 && n <= 26)
            
            cout << (char)(j + 96) << " ";
        }
            cout << endl;
    }

    return 0;
}