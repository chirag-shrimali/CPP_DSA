// Display this AP(Arithmetic Progression) - 3 , 7 , 11 , 15 , 19 ... upto N terms....

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No of terms : ";

    cin >> no;

    // int a = 3;

    // // n times loops executed...
    // for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     cout << a << "\t";

    //     a += 4; // a = a + 4;
    // }

    // ------------------------------------------------------------------------

    // int a = 3 , d = 4;

    // for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     cout << a << "\t";

    //     a += d; // a = a + d;
    // }

    // ------------------------------------------------------------------------

    // AP (Arithmetic Progression) an = a + (n - 1) * d; // an = 3 + (n - 1) * 4 // an = 3 + 4n - 4 // an = 4n - 1

    // for (int i = 3 ; i <= (4 * no - 1) ; i += 4) // i += 4 // i = i + 4
    // {
    //     cout << i << "\t";
    // }

    // ------------------------------------------------------------------------

    for (int i = 1; i <= no; i++) // i += 1 // i = i + 1
    {
        cout << (4 * i - 1) << "\t";
    }

    return 0;
}