// Write a Program to print the given numbers and it's reverse number sum...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    if (no == 0) cout << 0;

    int rev = 0;

    int no1 = no;

    while (no != 0)
    {

        int rem = no % 10;

        rev = (rev * 10) + rem;
        
        no /= 10;

    }
    
    cout << rev + no1;

    return 0;
}