/*
    Print all the odd numbers divisible by 3 from 1 to 100...
*/

/*
    Print all the even numbers from 1 to 100...
*/

// Boiler Plate Code...

#include <iostream> // Header Files...

using namespace std;

int main()
{
    int i;

    // 100 Times Iterations...

    // for (i = 1 ; i <= 100 ; i += 1) // i = i + 1 // i++
    // {

    //     if(i % 3 == 0 && i % 2 != 0) cout << i << "\t"; // i % 2 != 0 // i % 2 == 1 

    // }

    // 50 Times Iterations...

    // for (i = 1 ; i <= 100 ; i += 2) // i = i + 2
    // {

    //     if(i % 3 == 0) cout << i << "\t";

    // }

    // 17 Times Iterations...

    for (i = 3 ; i <= 99 ; i += 6) // i = i + 2
    {

        cout << i << "\t";

    }

    return 0;
}