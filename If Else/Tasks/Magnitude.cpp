/*
    Take integer as an input and tell if its magnitude is smaller than 69 or not...
*/

// magnitude means when we take mod|0| = 0 , mod|-5| = 5 , mod|5| = 5...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int no;

    cout << "\nEnter the No : ";

    cin >> no; // -65

    // int mag = -(no); // mag = -(-65) = 65

    if(no < 0) no *= -1; // Value Modifying..

    // cout << no;

    int mag = no;
    
    if(mag < 69) cout << "\nIt's Magnitude is smaller than 69...";

    else cout << "\nIt's Magnitude is not smaller than 69...";

    return 0;
}