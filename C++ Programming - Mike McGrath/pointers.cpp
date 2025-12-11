//
// Created by josh on 10/3/25.
//

// Pointers are variables that store the memory address of other variables.
// Declared the same, but suffixed with a '*' (a 'dereference' or 'indirection' operator).

#include <iostream>
using namespace std;

int main()
{
    int a = 8, b = 16;

    // Initialise pointers with memory address of int vars
    int* aPtr = &a;
    int* bPtr;
    bPtr = &b;

    cout << "Addresses of pointers: " << endl;
    cout << "aPtr: " << &aPtr << endl;
    cout << "bPtr: " << &bPtr << endl << endl;

    cout << "Values in pointers: " << endl;
    cout << "aPtr: " << aPtr << endl;
    cout << "bPtr: " << bPtr << endl << endl;

    cout << "Values in addresses pointed to: " << endl;
    cout << "a: " << *aPtr << endl;
    cout << "b: " << *bPtr << endl;

    return 0;
}