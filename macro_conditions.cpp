// The preprocessor can make intelligent insertions to program source code by using macros
// #ifdef tests to see if defined, then inserts all directives or statements
// #ifndef being the opposite

#ifndef BOOK
    #define BOOK "C++ Programming in easy steps"
#endif

#include <iostream>
using namespace std;

int main()
{
    // Add conditional preprocessor test to insert when test succeeds
    #ifdef BOOK
        cout << BOOK;
    #endif

    // Add another conditional preprocessor test to both define a new macro and insert an output statement
    #ifndef AUTHOR  
        #define AUTHOR "Mike McGrath"
        cout << " by " << AUTHOR << endl;
    #endif

    // Add conditional test to undefine macros if already defined
    #ifdef BOOK
        #undef BOOK
    #endif

    // Add conditional test to redefine a macro if no longer defined, insert output
    #ifndef BOOK
        #define BOOK "Linux in easy steps"
        cout << BOOK " by " << AUTHOR << endl;
    #endif

    return 0;
}