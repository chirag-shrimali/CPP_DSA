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

    for (int i = 1 ; i <= 3 ; i++)
    {
        for(int j = 1 ; j <= 5 ; j++)
        {
            cout << "* ";
        }
            cout << endl;
    }

    return 0;
}