// Print this series - 99 , 95 , 91 , 87 , ... , upto all terms which are positive...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    int no;

    cout << "\nEnter the No of terms : ";

    cin >> no;

    // int a = 99 , d = 4;

    // for (int i = 1 ; i <= no ; i++)
    // {
    //     cout << a << "\t";

    //     a -= d; // a = a - d; // a = 99 - 4; // a = 95
    // }

    // ------------------------------------------------------------------------

    // an = 99 + (n - 1) * 4 // an = 99 + (4n - 4) // 95 + 4n

    for (int i = 99 ; i >= 0 ; i -= 4) // i -= 4; // i = i - 4;
    {
        cout << i << "\t";
    }

    return 0;
}