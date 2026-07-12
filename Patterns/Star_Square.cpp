/*

    Print the Following Star Square Patterns...

    * * * *
    * * * *
    * * * *
    * * * *

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    // 1st Way -----------------------------------------------------------------

    // cout << "* * * *" << endl;

    // cout << "* * * *" << endl;

    // cout << "* * * *" << endl;

    // cout << "* * * *" << endl;

    // 2nd Way -----------------------------------------------------------------


    // for (int i = 1 ; i <= 4 ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     cout << "* * * *" << endl;
    // }

    // 3rd Way -----------------------------------------------------------------

    for (int i = 1 ; i <= 4 ; i++) // i++ // i += 1 // i = i + 1
    {
        for (int j = 1 ; j <= 4 ; j++)
        {
            cout << "* ";
        }
            cout << endl;
    }

    return 0;
}