/*
    Given ith day of a Week , tell which day it is...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int days;

    cout << "\nEnter the Days of the Week : ";
    
    cin >> days;

    switch (days)
    {
        case 1 : cout << "\nMonday";
                
                break;

        case 2 : cout << "\nTuesday";
                
                break;

        case 3 : cout << "\nWednesday";
                
                break;

        case 4 : cout << "\nThursday";
                
                break;

        case 5 : cout << "\nFriday";
                
                break;

        case 6 : cout << "\nSaturday";
                
                break;

        case 7 : cout << "\nSunday";
                
                break;

        default : cout << "\nInvalid Choice of Selection!!";
    }

    return 0;
}