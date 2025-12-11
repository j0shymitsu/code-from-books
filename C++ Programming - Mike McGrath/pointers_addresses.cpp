//
// Created by josh on 10/3/25.
//
// The operand to the left is called L-value and the right R-value.
// This can also be considered as: Location and Read
// An L-value may appear on either side, but an R-value only on the right.
// L-values are containers, R-values are data.

#include <string>
#include <iostream>
using namespace std;

int main()
{
    int num = 100;
    double sum = 0.0123456789;
    string text = "C++ Fun";

    cout << "Integer variable starts at: " << &num << endl;
    cout << "Double variable starts at: " << &sum << endl;
    cout << "String variable starts at: " << &text << endl;

    // Below is incorrect direction
    200 = num;
    5.5 = sum;
    "Bad assignments" = text;

    return 0;
}