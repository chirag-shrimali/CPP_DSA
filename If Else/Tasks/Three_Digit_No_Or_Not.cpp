/*
    Take Positive integer as an input and tell if it is a three digit number or not...
*/

// 4 number digit --> 100 to 999

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >>no;

    if(no >= 100 and no <= 999) cout << "It is a Three Digit Number..." << endl;

    else if (no >= -999 && no <= -100) cout << "It is a Three Digit Number..." << endl;

    else cout << "It is not a Three Digit Number...";

    return 0;
}