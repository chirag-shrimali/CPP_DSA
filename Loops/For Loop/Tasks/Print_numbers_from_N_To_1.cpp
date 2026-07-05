// Print the numbers from N to 1...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    for(int i = no ; i >= 1 ; i --) // i = 5 ; 5 >= 1 ; i = i - 1 (i = 5 - 1 = 4) // i = i - 1 // i -= 1 // i--
    
        cout << i << "\t"; // 5 4 3 2 1

    return 0;
}