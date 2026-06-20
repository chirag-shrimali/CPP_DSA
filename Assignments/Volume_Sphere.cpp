/*

        Volume of a Sphere : (4 * pi * r * r * r) / 3 

*/

#include<iostream>

using namespace std;

int main()
{
    float radius;

    float volume;

    cout << "\nEnter the Radius of a Sphere : ";

    cin >> radius;

    volume = (4 * 3.14 * radius * radius * radius) / 3;

    cout << "\nThe Volume of Sphere are : " << volume;

    return 0;
}