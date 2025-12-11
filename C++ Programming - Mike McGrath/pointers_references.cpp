//
// Created by josh on 10/7/25.
//

// Once a reference has been created, it will always refer to the item which it was initialised.
// Anything that happens to the reference is really implemented on the var or obj on which it refers.
// Traditionally, a reference is named with the title-case name of the var or obj, but prefixed with 'r'

#include <iostream>
using namespace std;

int main()
{
    int num;
    int& rNum = num;

    rNum = 400;

    // Stored value directly and via reference
    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;

    // Memory address directly and via reference
    cout << "Address direct: " << &num << endl;
    cout << "Address via reference: " << &rNum << endl;

    rNum *= 2;

    cout << "Value direct: " << num << endl;
    cout << "Value via reference: " << rNum << endl;


    return 0;
}