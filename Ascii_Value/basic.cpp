/*
                                    Ascii Value
    |-------------------------------------------------------------------------------------|   
    |                                                                                     |
    |                               A to Z --> 65 to 90                                   |
    |                                                                                     |
    |                               a to z --> 97 to 122                                  |
    |                                                                                     |
    |                               0 to 9 --> 48 to 57                                   |
    |                                                                                     |
    |-------------------------------------------------------------------------------------|

*/

#include <iostream>

using namespace std;

int main()
{
    // char ch = 'A';

    // char ch = 'a';

    // char ch = '0';

    // int ascii = int(ch);

    // int ascii = (int)ch; // Explicit Type_Casting...

    /*

    int ascii = ch; // Implicit Type_Casting...

    cout << ch << endl << ascii;

    */

    // ------------------------------------------------------------------------------------------

    // int x = 74;

    // char ch = x; // Implicit Type Casting...

    // ------------------------------------------------------------------------------------------

    int x = 74;

    char ch = (char)x; // Explicit Type Casting...

    cout << ch << endl;

    return 0;
}