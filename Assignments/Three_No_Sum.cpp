// Take Three numbers sum as an input and print their sum...

#include <iostream>

using namespace std;

int main()
{
    int a , b , c;

    int sum = 0;

    cout << "\nEnter the No1 : ";

    cin >> a;

    cout << "\nEnter the No2 : ";

    cin >> b;

    cout << "\nEnter the No3 : ";

    cin >> c;

    sum = a + b + c;

    cout << "\nThe Sum of " << a << " , " << b << " and " << c << " are : " << sum;

    return 0;
}