// Write a Program to check the Count digits of a number...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{

    // 1st Way ---------------------------------------------------------------------------------

    // int no;

    // cout << "\nEnter the No : ";

    // cin >> no;

    // int count = 0;

    // if (no == 0) count++;

    // while (no != 0)
    // {

    //     no /= 10; // no = no / 10

    //     count++; // count++ // count = count + 1 // count += 1
    
    // }

    // cout << "\nThe Total Number of Digits are : " << count;

    // 2nd Way ---------------------------------------------------------------------------------

    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    int count = 0;

    if (no == 0) count++;

    if (no < 0) no *= -1; // no = no * -1;

    while (no > 0)
    {

        no /= 10; // no = no / 10

        count++; // count++ // count = count + 1 // count += 1
    
    }

    cout << "\nThe Total Number of Digits are : " << count;

    return 0;
}