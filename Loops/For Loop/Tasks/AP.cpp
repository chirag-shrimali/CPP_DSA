// Display this AP(Arithmetic Progression) - 2 , 5 , 8 , 11 , ... upto terms....

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    for (int i = 2 ; i <= no ; i += 3)

        cout << i << "\t";

    return 0;
}