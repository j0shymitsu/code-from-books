//
// Created by josh on 10/7/25.
//

// When variables are passed to functions, their data is passed by value - function operates on a copy
// When references are passed to functions, their data is passed by reference - function operates on original value

#include <iostream>
using namespace std;

void writeOutput(int&);
void computeTriple(int&);

int main()
{
    int num = 5;
    int& ref = num;

    writeOutput(ref);

    ref += 15;
    writeOutput(ref);

    computeTriple(ref);
    writeOutput(ref);

    return 0;
}

// Functions that operate directly on variables need no return statement!
void writeOutput(int& value)
{
    cout << "Current value: " << value << endl;
}

void computeTriple(int& value)
{
    value *= 3;
}