// The preprocessor # operator is known as the "stringizing" operator
// It converts a series of chars passed as a macro arg into a string
// A macro definition can combine the two terms into a single term using the ## merging operator


// Define a macro to create a string from a series of characters to sub in an output statement
#define LINEOUT(str) cout << #str << endl

// Define a second macro to combine two terms passed as its arguments into a var name
#define GLUEOUT(a, b) cout << a##b << endl      // Also known as "token pasting"

// Specify library classes to include and a namespace prefix to use
#include <string>
#include <iostream>
using namespace std;

int main()
{
    // Declare & initialise string variable and append another
    string longerline = "They carried a net ";
    longerline += "and their hearts were set";

    // Add statements to output text using the macros
    LINEOUT(In a bowl to sea went wise men three);
    LINEOUT(On a brilliant night in     June);          // Extra spaces will be removed by the stringizing operator
    GLUEOUT(longer, line);
    LINEOUT(On fishing up the moon);

    return 0;
}
