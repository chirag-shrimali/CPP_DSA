// Write a Program to print all the factors of a given number n...

// Boiler Plate Code...

#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    int no;
    
    cout << "\nEnter the No : ";
    
    cin >> no;

    // 1st WAY -----------------------------------------------------------------------
    
    // for (int i = 1 ; i <= no ; i++) // i++ // i += 1 // i = i + 1
    // {
    //     if (no % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }

    // 2nd WAY -----------------------------------------------------------------------
    
    for (int i = 1 ; i <= sqrt(no) ; i++) // i++ // i += 1 // i = i + 1
    {
            if(no % i == 0) 
            {
    
                cout << i << " ";
                
                if (i != (no / i)) cout << (no / i) << " ";
    
            }
    }
    return 0;
}