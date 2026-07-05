// Print the numbers from N to 1...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    // for(int i = no ; i >= 1 ; i--) // i = 5 ; 5 >= 1 ; i = i - 1 (i = 5 - 1 = 4) // i = i - 1 // i -= 1 // i--

    //     cout << i << "\t"; // 5 4 3 2 1

    for (int i = 1; i <= no; i++) // i++ // i+= 1 // i = i + 1

        cout << no + 1 - i << "\t"; // 

        // no = 7

        // i = 1 // 7 + 1 - 1 // 7

        // i = 2 // 7 + 1 - 2 // 6

        // i = 3 // 7 + 1 - 3 // 5

        // i = 4 // 7 + 1 - 4 // 4

        // i = 5 // 7 + 1 - 5 // 3

        // i = 6 // 7 + 1 - 6 // 2

        // i = 7 // 7 + 1 - 7 // 1

    return 0;
}