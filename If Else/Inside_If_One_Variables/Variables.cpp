// Boiler Plate Code...

// Any thing except 0 in c++ when we can be write it will be always prints if statements...

#include <iostream>

using namespace std;

int main()
{
    // int x = 0; // consider as false bool data types...

    // if(x) cout << "C++";

    // else cout << "Java"; // Here x = 0 shows false statements in C++ so if consitions becomes false thus , else parts prints...

    // int x = 1; // consider as true bool data types...

    // if(x) cout << "C++"; // true --> if(1 --> consider as true statements in c++) thus , if statements can be prints...

    // else cout << "Java";

    // int x = 45; // anything except 0 consider as true (1) so if statements will be excuted... 

    // float x = 4.55; // true

    // float x = 0.000; // false --> prints Java

    float x = -0.00004; // consider as true except 0

    if(x) cout << "C++";

    else cout << "Java";

    return 0;
}