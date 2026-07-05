// Display this GP(Geometric Progression) - 1 , 2 , 4 , 8 , ... upto 'n' terms.

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No of terms : ";

    cin >> no;

    int a = 1;

    for (int i = 1; i <= no; i++)
    {
        cout << a << "\t";

        a *= 2; // a = a * 2;
    }
    
    return 0;
}