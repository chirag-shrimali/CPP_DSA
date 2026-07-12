/*

    Print the Following Alphanumeric Triangle Patterns...

    A
    A B
    A B C
    A B C D

*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "\nEnter the Value Of N : ";

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {   
            if(i % 2 == 0)
            {
                cout << (char)(j + 64)  << " ";
            }
            else{
                cout << j << " ";
            }
        }
        cout << endl;
    }
}