//
// Created by josh on 9/15/25.
//

// Evaluates an expression for boolean and returns one of two specified values depending on the result of the evaluation.
// Commonly used to assign the max or min value of two variables to a third variable.

#include <iostream>
using namespace std;

int main()
{
    int a, b, max;

    a = 1, b = 2;

    // Output value and parity
    cout << "Variable 'a' value is: ";
    cout << ((a != 1) ? "not one, " : "one, ");
    cout << ((a % 2 != 0) ? "odd" : "even");

    cout << endl << "Variable 'b' value is: ";
    cout << ((b != 1) ? "not one, " : "one, ");
    cout << ((b % 2 != 0) ? "odd" : "even");

    // Output greater of two stored variables
    max = (a > b) ? a : b;
    cout << endl << "Greater value is: " << max << endl;

    return 0;
}