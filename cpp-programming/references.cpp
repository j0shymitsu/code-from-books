//
// Created by josh on 10/7/25.
//

// Generally, passing by reference is more efficient than passing by value.
// Rules:

// Rule                                         References?     Pointers?
// Can be declared without initialisation       N               Y
// Can be reassigned                            N               Y
// Can contain a 0 (null) value                 N               Y
// Easiest to use                               Y               N

#include <iostream>
using namespace std;

// Example of an inline function
void add(int& a, int* b)
{cout << "Total: " << (a + *b) << endl;};

int main()
{
    int num = 100, sum = 500;
    int& rNum = num;
    int* ptr = &num;
    void(*fn)(int& a, int* b) = add;

    cout << "Reference: " << rNum << endl;
    cout << "Pointer: " << *ptr << endl;

    ptr = &sum;
    cout << "Pointer: " << *ptr << endl;
    add(rNum, ptr);

    return 0;
}