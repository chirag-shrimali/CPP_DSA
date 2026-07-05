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

    // for (int i = 2 ; i <= (3 * no - 1) ; i += 3) // i = a ; i <= an ; i += d (i = i + d)

    //     cout << i << "\t";

    // for (int i = 1; i <= no; i++)

    //     cout << (3 * i - 1) << "\t";

    // int a = 2;

    int a = 2 , d = 3;

    for (int i = 1 ; i <= no ; i++) // 1 to n times loops will be iterations...
    {
        cout << a << "\t"; // 2 5 ...

        // a += 3; // a = a + 3; // a = 2 + 3 // a = 5
    
        a += d; // a = a + d; // a = 2 + 3; // a = 5 
    }
    return 0;
}