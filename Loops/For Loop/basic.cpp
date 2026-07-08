/*
    
    Loops is a things with repetition tasks...

Entry Controlled Loops

For Loops Syntax :-

    for(initialization ; condition ; update(increament / decreament))
    {
        // code...
    }

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    // prints 1 to 5 numbers using for loops...

    // 1st Way -------------------------------------------------------------------------------

    // int no = 5;

    // int i;

    // for(i = 1 ; i <= no ; i++)
    // {
    //     cout << i << endl;
    // }

    // 2nd Way -------------------------------------------------------------------------------

    // for (int i = 1 ; i <= 5 ; i++) // i++ // i += 1 // i = i + 1 
    // {
    //     cout << i << endl;
    // }

    // 3rd Way -------------------------------------------------------------------------------

    // int i;

    // for (i = 1 ; i <= 5 ; i++) // i++ // i += 1 // i = i + 1 
    // {
    //     cout << i << endl;
    // }

    // 4th Way -------------------------------------------------------------------------------

    int i = 1;

    for (; i <= 5 ;) 
    {
        cout << i << endl;

        i++; // i++ // i += 1 // i = i + 1
    
    }

    return 0;
}