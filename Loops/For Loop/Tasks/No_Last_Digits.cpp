// Number Last Digits unit digits prints...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    int rem;

    for (int i = 1 ; i <= no ; i++)
    {
        rem = no % 10;
    }

    cout << rem;

    return 0;
}