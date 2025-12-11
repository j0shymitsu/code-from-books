//
// Created by josh on 9/18/25.
//

// "cin" is used to input a single word (or numbers, etc) at a time. When after a sentence, for example, use "getline()"

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Please enter your full name: ";
    cin >> name;
    cout << "Welcome " << name << endl;

    cout << "Please enter your full name: ";
    cin.ignore(256, '\n');  // Discard up to 256 characters, and stop when encountering newline
    getline(cin, name);
    cout << "Thanks, " << name << endl;

    return 0;
}