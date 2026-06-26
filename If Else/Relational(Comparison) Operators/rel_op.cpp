// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a = 3;

    int b = 5;

    // 3 < 5 = 1(true)

    cout << (a < b) << endl; // it will be print 1 or 0 if given condition is true or false as respectively... 

    cout << (a > b) << endl; // 3 > 5 = 0(false)

    cout << (5 >= b) << endl; // 5 >= 5 = 1(true)

    cout << (a <= 3) << endl; // 3 <= 3 = 1(true)
    
    cout << (a == b) << endl; // 3 == 5 (false --> 0)
    
    cout << (a != b) << endl; // 3 != 5 (true --> 1)

    return 0;
}