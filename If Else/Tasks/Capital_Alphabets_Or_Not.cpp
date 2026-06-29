/*
    Take as char input and tell if is Capital Alphabet or not...
*/

// Boiler - Plate Code...

#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "\nEnter Your Character(A - Z) : ";

    cin >> ch;

    int ascii = (int)ch; // Explicit Type Casting...

    // when user enter any character ascii variable converts it into ascii value and the range if between 65 to 90 then enter character is Captital otherwise not...
    
    if (ascii >= 65 and ascii <= 90) cout << endl << ch << " is a Capital Alphabet...";

    else cout << endl << ch << " is not a Capital Alphabet...";

    return 0;
}