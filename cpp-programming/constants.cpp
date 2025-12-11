//
// Created by josh on 9/12/25.
//

// Data that will not change during the execution of a program should be stored in a constant container, rather than a
// variable. Constant names in C++ should be uppercase and initialised at declaration.

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.1415926536;
    cout << "6\" circle circumference: " << (PI * 6) <<  endl;

    // Enumerated lists
    enum { RED=1, YELLOW, GREEN, BROWN, BLUE, PINK, BLACK };
    cout << "I shot a red worth: " << RED << endl;
    cout << "Then a blue worth: " << BLUE << endl;
    cout << "Total scored: " << (RED + BLUE) <<  endl;

    // Custom data type (typedef)
    typedef enum { NEGATIVE, POSITIVE } charge;
    charge neutral = NEGATIVE, live = POSITIVE;
    cout << "Neutral wire: " << neutral << endl;
    cout << "Live wire: " << live << endl;

    return 0;
}