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

    // 1st Way ------------------------------------------------------------------------------

    // int count = 0;

    // for (int i = 1; i <= no; i++)
    // {
    //     if (no % i == 0)
    //     {
    //         count++; // count = count + 1; // count += 1
    //     }
    // }

    // if (count == 2) cout << endl << no << " is a Prime No...";

    // else if (count < 2) cout << endl << no << " is not a Prime or Composite No...";

    // else
    //     cout << endl << no << " is a Composite No...";

    // 2nd Way -----------------------------------------------------------------------------
    
    // int count = 0;

    // for (int i = 2 ; i <= (no - 1) ; i++)
    // {
    //     if(no % i == 0)
    //     {
    //         count++; // count++ // count = count + 1 // count += 1;
            
    //         break;
    //     }
    // }
    
    // if (count == 1) cout << endl << no << " is a Composite No...";
    
    // else cout << endl << no << " is not a Composite No...";

    // 3rd Way --------------------------------------------------------------------------

    bool flag = false; // initially we are consider in the flag variable which data types is bool here stored false means 0 shows number is prime no...

    for (int i = 2 ; i <= (no - 1) ; i++) // i++ // i += 1 // i = i + 1
    {
        if(no % i == 0)
        {
        
            flag = true; // this shows that the flag value changed false to true means the given number between 2 to n - 1 is divisible(factors) to another numbers betwwen the 2 to n - 1 thus if any another number we gets we just break here and print if flag value is true then composite number otherwise not a composite number...
        
            break;

        }
    } 

    if (flag == true) cout << endl << no << " is a Composite No..."; // flag == 1

    else cout << endl << no << " is a Prime No...";

    return 0;
}