//
// Created by josh on 9/22/25.
//

// String values can be assigned to a string variable using the '=' operator or the 'assign()' function.
// 'assign()' can also copy just part of the string.
// 'swap()' can be used to exchange with another string variable.
// Use the 'swap()' function where possible rather than creating additional string variables

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string front;
    string back;
    string text = "Always laugh when you can. It\'s cheap medicine.";

    // Assign entire value of text to initialised string
    front.assign(text);
    cout << endl << "Front: " << front << endl;

    // Assign only first 27 chars
    front.assign(text, 0, 27);
    cout << endl << "Front: " << front << endl;

    // Assign only last 27 chars
    back.assign(text, 27, text.size());
    cout << "Back: " << back << endl;

    // Exchange values
    back.swap(front);
    cout << endl << "Front: " << front << endl;
    cout << endl << "Back: " << back << endl;

    return 0;
}