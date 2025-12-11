//
// Created by josh on 9/19/25.
//

// When the + operator is used to concatenate strings, the combined strings get stored in the variable.
// If it is used in the 'cout' function, the strings are only combined in the output.
// The 'compare()' function returns 0 when strings are identical, -1 if less, and 1 if greater (ASCII value total)

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++";
    string term = " Programming";
    string text = "C++ Programming";

    cout << "Concatenated: " << (lang + term) << endl;
    cout << "Original: " << lang << endl;

    cout << "Appended: " << lang.append(term) << endl;
    cout << "Original: " << lang << endl << endl;

    cout << "Differ: " << (lang == term) << endl;
    cout << "Match: " << (lang == text) << endl << endl;

    cout << "Match: " << lang.compare(text) << endl;
    cout << "Differ: " << lang.compare(term) << endl;
    cout << "Lower ASCII: " << lang.compare("zzzzz") << endl;

    return 0;
}