// Preprocessor directives can also help with debugging
// The condition to be evaluated will be passed from the caller as the ASSERT function arg
// Multiple statements can be included in the macro function definition by adding a backslash "\" at the end.
// An ASSERT function can be controlled by a DEBUG macro, enabling turning on and off.


// Define a DEBUG macro with an "on" value of 1
#define DEBUG 1

// Add a macro if-elif statement to define the ASSERT function
#if(DEBUG == 1)
    // Definition for "on" goes here
    #define ASSERT(expr)                                \
    cout << #expr << "..." << num;                      \
    if (expr != true)                                   \
    {                                                   \
        cout << " Fails in file: " << __FILE__;          \
        cout << " at line: " << __LINE__ << endl;       \
    }                                                   \
    else                                                \
    {                                                   \
        cout << " Succeeds" << endl;                     \
    }                                                   

    
#elif(DEBUG == 0)
    // Definition for "off" goes here
    #define ASSERT(result)                              \
    cout << "Number is " << num << endl;                
#endif

#include <iostream>
using namespace std;

int main()
{
    // Declare and initialise integer variable, call macro ASSERT function to check its value as incremented
    int num = 9;    ASSERT(num < 10);
    num++;          ASSERT(num < 10);
    
    return 0;
}

