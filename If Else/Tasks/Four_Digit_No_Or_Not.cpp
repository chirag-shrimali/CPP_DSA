/*
    Take Positive integer as an input and tell if it is a four digit number or not...
*/

// 4 number digit --> 1000 to 9999

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >>no;

    if(no >= 1000 and no <= 9999) cout << "It is a Four Digit Number..." << endl;

    else if (no >= -9999 && no <= -1000) cout << "It is a Four Digit Number..." << endl;

    else cout << "It is not a Four Digit Number...";

    return 0;
}