// Take 'n' as an input from user and print the following sequence...

/*

    1
    n
    2
    n - 1
    3
    n - 2

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    for (int i = 1 ; i <= no ; i++) // i += 1 // i = i + 1

        cout << i;

    for (int i = no ; i >= 1 ; i--)

        cout << i;

    return 0;
}