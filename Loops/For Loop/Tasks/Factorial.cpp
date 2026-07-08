// Write a Program to print the Factorial of a given number...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    int fact = 1;

    for(int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    {
        fact = fact * i; // fact *= i;
    }

    cout << "\nThe " << no << " Number Factorial are : " << fact;

    return 0;
}