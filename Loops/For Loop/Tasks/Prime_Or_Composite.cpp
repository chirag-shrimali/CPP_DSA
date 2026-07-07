// Write a Program to check that given number n is prime or composite...

// prime number is such a number which can be divide by number itself or by 1...

// composite function is such a number which factor(divide) by 3 number or more than 3 numbers...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    int count = 0;

    for (int i = 1; i <= no; i++)
    {
        if (no % i == 0)
        {
            count++; // count = count + 1; // count += 1
        }
    }

    if (count == 2) cout << endl << no << " is a Prime No...";

    else if (count < 2) cout << endl << no << " is not a Prime or Composite No...";

    else
        cout << endl << no << " is a Composite No...";

    return 0;
}