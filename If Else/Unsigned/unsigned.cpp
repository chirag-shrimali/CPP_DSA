// unsigned used to stored only positive values of the numbers...

// int , float , double , short , long long(long) any data types we can be takes...

// it can be prints only 0 to positive numbers up to there range...

// it can not be prints the negaive values prints only non - negative values...

// Boiler - Plate Code...

#include <iostream> // Header Files to access the properties of that files...

#include <climits> // Header Files to access the properties of that files...

using namespace std;

int main()
{
    unsigned int x1 = 10;

    cout << x1 << endl; // prints 10

    unsigned int x2 = 1;

    cout << x2 << endl; // prints 1

    unsigned int x3 = 0;

    cout << x3 << endl; // prints 0

    unsigned int x4 = -10;

    cout << x4 << endl; // no error but prints random garbage value...

    unsigned int x5 = -1;

    cout << x5 << endl; // no error but prints random garbage value...

    return 0;
}