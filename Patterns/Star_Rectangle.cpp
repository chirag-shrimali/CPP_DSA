/*

    Print the Following Star Rectangle Patterns...

    * * * * *
    * * * * *
    * * * * *

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    // 1st Way ----------------------------------------------------------------

    // cout << "* * * * *" << endl;

    // cout << "* * * * *" << endl;

    // cout << "* * * * *";

    // 2nd Way ----------------------------------------------------------------

    // for (int i = 1 ; i <= 3 ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     cout << "* * * * *" << endl;
    // }

    // 3rd Way ----------------------------------------------------------------

    int rows , columns;

    cout << "\nEnter the Rows : ";

    cin >> rows;

    cout << "\nEnter the Columns : ";

    cin >> columns;

    for (int i = 1 ; i <= rows ; i++)
    {
        for(int j = 1 ; j <= columns ; j++)
        {
            cout << "* ";
        }
            cout << endl;
    }

    return 0;
}