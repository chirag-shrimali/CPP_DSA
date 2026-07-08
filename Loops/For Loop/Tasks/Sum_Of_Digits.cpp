// Write a Program to print the sum of first n numbers of a digits...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;
    
    cout << "\nEnter the No : ";
    
    cin >> no;
    
    int sum = 0;
    
    for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    {
        sum = sum + i;
    }
    
    cout << "\nThe Sum of first " << no << " numbers are : " << sum;


    return 0;
}