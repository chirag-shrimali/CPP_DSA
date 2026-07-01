/*      Ternary Operators Syntax...

        condition ? sach : galat
*/

// Boiler Plate Code...

#include <iostream> // Header Files...

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no;

    // (no % 2 == 0) ? cout << "Even" : cout << "Odd";

    cout << ((no % 2 == 0) ? "Even" : "Odd");

    return 0;
}