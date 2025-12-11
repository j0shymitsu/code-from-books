//
// Created by josh on 11/25/25.
//

// A preprocessor function comprises a macro name immediately followed by parentheses containing the function's args
// For example, a preprocessor macro function to half an argument would be: #define HALF(n)(n/2)
// There is NO type checking

#define SQUARE(n)(n * n)
#define CUBE(n)(n * n * n)

#include <iostream>
#include <ostream>
using namespace std;

inline int square(int n) { return n * n; }
inline int cube(int n) { return n * n * n; }

int main()
{
    int num = 5;

    cout << "Macro SQUARE: " << SQUARE(num) << endl;
    cout << "Inline square: " << square(num) << endl;
    cout << "Macro CUBE: " << CUBE(num) << endl;
    cout << "Inline CUBE: " << CUBE(CUBE(num)) << endl;

    return 0;
}
