// Display this AP(Arithmetic Progression) - 2 , 5 , 8 , 11 , ... upto N terms....

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    // an / tn / Tn = a + (no - 1) * d // an = 2 + (no - 1) * 3 // an = 2 + (3 * no - 3) // an = 3 * no - 1

    for (int i = 2 ; i <= (3 * no - 1) ; i += 3) // i = a ; i <= an ; i += d (i = i + d)

        cout << i << "\t";

    return 0;
}