/*

    Print the Following Number Square Patterns...

    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    // 1st Way -------------------------------------------------------------------

    // cout << "1 1 1 1" << endl;

    // cout << "2 2 2 2" << endl;

    // cout << "3 3 3 3" << endl;

    // cout << "4 4 4 4" << endl;

    // 2nd Way -------------------------------------------------------------------

    // for (int i = 1 ; i <= 4 ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     if (i == 1)
    //     cout << "1 1 1 1" << endl;

    //     if (i == 2)
    //     cout << "2 2 2 2" << endl;

    //     if (i == 3)
    //     cout << "3 3 3 3" << endl;

    //     if (i == 4)
    //     cout << "4 4 4 4" << endl;
    // } 

    // 3rd Way -------------------------------------------------------------------

    int n;

    cout << "\nEnter the Value of N : ";

    cin >> n;

    for (int i = 1 ; i <= n ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= n ; j++)
        {
            cout << i << " ";
        }
            cout << endl;
    }

    return 0;
}