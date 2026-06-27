/*
    if cost price and selling price of an item is taken as an input throught the keyboard , 

    write a program to determine whether the seller has made profit or incurred loss or no profit no loss.

    Also determine how much profit he made or loss he incurred...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    float cp;

    float sp;

    cout << "\nEnter the Cost Price of an Item : ";

    cin >> cp;

    cout << "\nEnter the Selling Price of an Item : ";

    cin >> sp;

    if (cp < sp) 
    {
        cout << "Profit...";

        float profit = sp - cp;

        cout << "\nProfit is = " << profit;
    }

    else if (cp > sp) 
    {
        cout << "Loss...";

        float loss = cp - sp;

        cout << "\nLoss is = " << loss;
    }

    else cout << "\nNo Profit , No Loss...";

    return 0;
}