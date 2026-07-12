/*

    Print the Following Star Rectangle Patterns...

    n = 4 , m = 7

    * * * * * * *
    * # # # # # *
    * # # # # # *
    * # # # # # *
    * * * * * * *


*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    int rows, columns;

    cout << "\nEnter the Rows : ";

    cin >> rows;

    cout << "\nEnter the Columns : ";

    cin >> columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == columns)

                cout << "* ";

            else
                cout << "# ";
        }
        cout << endl;
    }

    return 0;
}