//
// Created by josh on 9/17/25.
//

// At the command prompt, the C++ "cin" function can be used with the >> input stream operator to direct a value from
// standard input to a variable.

// Function prototypes can assign default values to arguments.

#include <iostream>
using namespace std;

float fToC(float degreesF = 32);

int main()
{
    float fahrenheit, centigrade;

    cout << "Enter a Fahrenheit temperature:\t";
    cin >> fahrenheit;

    centigrade = fToC(fahrenheit);

    cout << fahrenheit << "f is " << centigrade << "c";
    cout << endl << "Freezing point: " << fToC() << "c";

    return 0;
}

float fToC(float degreesF)
{
    float degreesC = ((5.0 / 9.0) * (degreesF - 32));
    return degreesC;
}