//
// Created by josh on 9/11/25.
//

#include <iostream>
using namespace std;

int main()
{
    char letter;    letter = 'A';      // Declared THEN init
    int number;     number = 100;
    float decimal = 7.5;
    double pi = 3.141592653589;
    bool isTrue = false;

    cout << "char letter: " << letter << endl;
    cout << "int number: " << number << endl;
    cout << "float decimal: " << decimal << endl;
    cout << "double pi: " << pi << endl;
    cout << "bool isTrue: " << isTrue << endl;

    return 0;
}