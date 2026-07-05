// Print the table of N Table...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    cout << endl;

    for(int i = 1 ; i <= 10 ; i++)
    {
        cout << no << " X " << i << " = " << (no * i) << endl;
    }

    return 0;
}