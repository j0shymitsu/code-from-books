//
// Created by josh on 9/15/25.
//

// Below is a table listing operator precedence in descending order (grouped):

// () Function Call
// [] Array index
// -> Class pointer
// . Class member

// ! Logical NOT
// * Pointer
// -- Decrement
// ++ Increment
// + Positive sign
// - Negative sign
// sizeof Size of
// & Address of

// * Multiply
// / Divide
// % Modulus

// + Add
// - Subtract

// <= Less or equal
// < Less than
// >= Greater or equal
// > Greater than

// == Equality
// != Inequality

// && Logical AND

// || Logical OR

// ?: Ternary

// =, +=, -=, *=, /=, %= Assignment

// , Comma

#include <iostream>
using namespace std;

int main()
{
    // Default precedence
    int num = 1 + 4 * 3;
    cout << endl << "Default order: " << num << endl;

    num = (1 + 4) * 3;
    cout << "Forced order: " << num << endl << endl;

    // Direction precedence
    num = 7 - 4 + 2;
    cout << "Default direction: " << num << endl;

    num = 7 - (4 + 2);
    cout << "Forced direction: " << num << endl;

    return 0;
}