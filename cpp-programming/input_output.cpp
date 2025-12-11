//
// Created by josh on 9/30/25.
//

// <iostream> library provides a " manipulators" list in the table below, which modify a stream using the << or >> o
// operators. Manipulators marked with an asterisk are the default.
//
//  MANIPULATOR             DISPLAY
//
// noboolalpha*     ->      Boolean values as 1 or 0
// boolalpha        ->      Boolean values as "true" or "false"
// dec*             ->      Integers as base 10 (decimal)
// hex              ->      Integers as base 16 (hexadecimal)
// oct              ->      Integers as base 8 (octal)
// right*           ->      Text right-justified in the output width
// left             ->      Text left-justified in the output width
// internal         ->      Sign left-justified, number right justified
// nowshowbase*     ->      No prefix indicating numeric base
// showbase         ->      Prefix indicating numeric base
// noshowpoint*     ->      Whole number only when a fraction is zero
// showpoint        ->      Decimal point for all floating numbers
// noshowpos*       ->      No + prefix before positive numbers
// showpos          ->      Prefix numbers with a + sign
// noskipws*        ->      Do not skip whitespace for >> input
// skipws           ->      Skip whitespace for >> input
// fixed*           ->      Floating point numbers to six decimal places
// scientific       ->      Floating point numbers in scientific notation
// nouppercase*     ->      Scientific as e and hexadecimal number as ff
// uppercase        ->      Scientific as E and hexadecimal number as FF

#include <iostream>
using namespace std;

int main()
{
    bool isTrue = 1;
    int num = 255;

    cout.width(40);
    cout.fill('.');
    cout << "Output" << endl;

    cout.precision(11);
    cout << "Pi: " << 3.141592653589793 << endl;

    cout << isTrue << ": " << boolalpha << isTrue << endl;
    cout << num << ": " << hex << showbase << uppercase << num << endl;

    return 0;
}