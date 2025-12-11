//
// Created by josh on 9/18/25.
//

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string term = "100";
    int number = 100;

    int num;                // To store a converted string
    string text;            // To store a converted int
    stringstream stream;    // To perform conversions

    stream << term;         // Load the string
    stream >> num;          // Extract the int
    num /= 4;
    cout << "Integer value: " << num << endl;
    stream.str("");   // Empty the contents
    stream.clear();         // Empty the bit flags

    stream << number;       // Load the int
    stream >> text;         // Extract the string
    text += " Per Cent";
    cout << "String value: " << text << endl;

    return 0;
}