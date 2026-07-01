// Boiler Plate Code...

#include <iostream> // Header Files...

using namespace std;

int main()
{
    int a , b , c;

    cout << "\nEnter the No1 : ";

    cin >> a;

    cout << "\nEnter the No2 : ";

    cin >> b;

    cout << "\nEnter the No3 : ";

    cin >> c;

    int ans = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);

    cout << ans;

    return 0;
}