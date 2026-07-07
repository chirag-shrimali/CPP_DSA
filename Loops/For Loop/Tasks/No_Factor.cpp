// Write a Program to print all the factors of a given number n...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;
    
    cout << "\nEnter the No : ";
    
    cin >> no;
    
    for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    {
        if (no % i == 0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}