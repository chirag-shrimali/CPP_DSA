// Calculate the simple interest using formula...

/*
    S.I. :- (P * R * T) / 100

        where , S.I. = Simple Interest
                
                P = Principal(the initial amount borrowed or invested)

                R = Rate of interest(as a percentage per year)

                T = Time(duration of the loan or investment , in years)

                To Find the Total Amount(A) : P + I
*/

#include <iostream>

using namespace std;

int main()
{
    float SI;

    float P , R , T;

    cout << "\nEnter the Value of the Principal : ";

    cin >> P;

    cout << "\nEnter the Value of the Rate of the Principal : ";

    cin >> R;

    cout << "\nEnter the Value of the Time : ";

    cin >> T;

    SI = (P * R * T) / 100;

    cout << "\nThe Simple Interest Value are : " << SI;

    return 0;
}