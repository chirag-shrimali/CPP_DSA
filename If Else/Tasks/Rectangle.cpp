/*
    Take length and breadth of rectangle as an input and write a program , 
    
    to find whether the area of the rectangle is greater than its perimeter...
*/

// Boiler Plate Code...

#include <iostream>

using namespace std;

int main()
{
    float length;

    float breadth;

    float perimeter;

    float area;

    cout << "\nEnter the Length of the Rectangle : ";

    cin >> length;

    cout << "\nEnter the Breadth of the Rectangle : ";

    cin >> breadth;

    area = (length * breadth);

    perimeter = 2 * (length + breadth);

    if (area > perimeter) cout << "Big...TRUE";

    else cout << "Small...FALSE";

    cout << "\nThe Perimeter of the Rectangle area : " << perimeter;

    cout << "\nThe Area of the Rectangle are : " << area;

    return 0;
}