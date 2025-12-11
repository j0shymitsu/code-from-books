//
// Created by josh on 9/12/25.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 0;   // True & false

    // AND evaluations
    cout << "AND logic: " << endl;
    cout << "(a && a) " << (a && a) << " (true)\n";
    cout << "(a && b) " << (a && b) << " (false)\n";
    cout << "(b && b) " << (b && b) << " (false)\n\n";

    // OR evaluations
    cout << endl << "OR logic: " << endl;
    cout << "(a || a) " << (a || a) << " (true)\n";
    cout << "(a || b) " << (a || b) << " (true)\n";
    cout << "(b || b) " << (b || b) << " (false)\n\n";

    // NOT evaluations
    cout << endl << "NOT logic: " << endl;
    cout << "a = " << a << "\n!a = " << !a << endl;
    cout << "b = " << b << "\n!b = " << !b << endl;

    return 0;
}