//
// Created by josh on 11/6/25.
//

// The "#define" directive specifies a macro
// Macro names traidtioanlly use UPPERCASE

// 

#define BOOK "C++ Programming in Easy Steps"
#define NUM 200
#define RULE "***************************"

// Specify the library classes to include the namespace
#include <iostream>
using namespace std;

int main()
{
    cout << RULE << endl << BOOK << endl << RULE;
    cout << endl << "NUM is: " << NUM << endl;
    cout << "Double NUM: " << ((NUM ) * 2) << endl;

    return 0;
}