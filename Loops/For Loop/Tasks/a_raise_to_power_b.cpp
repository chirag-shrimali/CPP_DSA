// 'a' raise to the power of 'b'...

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    int a , b;
    
    cout << "\nEnter the Value of A : ";
    
    cin >> a;
    
    cout << "\nEnter the Value of B : ";
    
    cin >> b;
    
    // a ^ b // 2 ^ 3 // 2 * 2 * 2 = 8 // 3 times 2 // b times a...
    
    int mul = 1;
    
    for (int i = 1 ; i <= b ; i++) // i = 1 to 3 1 , 2 , 3...
    {
        mul *= a; // mul = mul * a; // mul = 1 * 2 // mul = 2 
    }
    
    cout << mul;

    return 0;
}