// Write a Program to print the sum of Digits of a number...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    int rem;

    int sum = 0;

    while (no != 0)
    {
        rem = no % 10;

        sum = sum + rem;

        no = no / 10;
    }

    cout << sum;

    return 0;
}