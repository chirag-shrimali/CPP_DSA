/*

    Print the Following Number Square Patterns...

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
    // 1st Way -------------------------------------------------------------------

    // cout << "1 2 3 4" << endl;

    // cout << "1 2 3 4" << endl;

    // cout << "1 2 3 4" << endl;

    // cout << "1 2 3 4" << endl;

    // 2nd Way -------------------------------------------------------------------

    // for (int i = 1 ; i <= 4 ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     cout << "1 2 3 4" << endl;
    // } 

    // 3rd Way -------------------------------------------------------------------

    int n;

    cout << "\nEnter the Value of N : ";

    cin >> n;

    for (int i = 1 ; i <= n ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= n ; j++)
        {
            cout << j << " ";
        }
            cout << endl;
    }


    return 0;
}