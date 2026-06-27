// Take Real No as an input and check if it is an integer or not...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    float no;

    cout << "\nEnter the Real No : ";

    cin >> no;
    

    int no1 = (int)no;

    // cout << no << " " << no1;

    if (no == no1) cout << "Integer...";

    else cout << "Not Integer...";

    return 0;
}