//
// Created by josh on 10/3/25.
//

// When variables are passed to functions, their data is passed "by value" (a copy).
// When pointers are passed to functions, their data is passed "by reference" (original value).

#include <iostream>
using namespace std;

// Function prototypes that accept a ptr arg
void writeOutput(int*);
void computeTriple(int*);

int main()
{
    int num = 5;
    int* ptr = &num;

    writeOutput(ptr);

    *ptr += 15;     // Add and assign a dereferenced value

    writeOutput(ptr);
    computeTriple(ptr);
    writeOutput(ptr);

    return 0;
}

void writeOutput(int* value)
{
    cout << "Current Value: " << *value << endl;
}

void computeTriple(int* value)
{
    *value *= 3;
}