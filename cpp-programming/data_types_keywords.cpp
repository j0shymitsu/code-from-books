//
// Created by josh on 9/10/25.
//

// ===== C++ Keywords ======
//
// auto         -> Deduces the type of variable automatically
// break        -> Exit from a loop or switch
// case         -> A branch in a switch statement
// catch        -> Handles exceptions thrown in try blocks
// char         -> Character data type
// class        -> Defines a class (user-defined type)
// const        -> Defines constants / prevents modification
// continue     -> Skip rest of current loop iteration
// default      -> Default branch in a switch
// delete       -> Frees memory allocated with new
// do           -> Loop construct (do { } while(condition))
// double       -> Double-precision floating-point type
// else         -> Executes whe if-condition is false
// enum         -> Defines an enumeration (named constants)
// extern       -> Declares a variable defined in another file
// float        -> Floating-point type (Single precision)
// for          -> Loop construct (for(init; cond; step))
// friend       -> Grants access to another class/function
// goto         -> Jumps to a labelled statement (use is discouraged)
// if           -> Conditional execution
// int          -> Integer type
// long         -> Long integer type
// mutable      -> Allows class member to be modified even if const
// new          -> Allocates memory dynamically
// operator     -> Defines or overloads operators (+, -, etc)
// private      -> Class access specifier (only inside class)
// protected    -> Access specifier (class and derived classes)
// public       -> Access specifier (anywhere)
// register     -> Suggests storing variable in CPU register (deprecated)
// return       -> Exit from function and return a value
// short        -> Short integer type
// signed       -> Integer type that allows negative numbers
// sizeof       -> Returns size of a type or object in bytes
// static       -> Keeps variable alive across calls / limits scope
// struct       -> Defines a struct (like a class, default public)
// switch       -> Multi-branch conditional statement
// template     -> Defines generic functions or classes
// this         -> Pointer to a current object in a class
// throw        -> Throws an exception
// typedef      -> Defines an alias for a data type
// union        -> Defines a type where all members share the same memory
// unsigned     -> Integer type that holds only non-negative values
// virtual      -> Allows method overriding in derived classes
// void         -> No value / no return
// volatile     -> Prevents compiler from optimising away variable usage
// while        -> Loop construct (while(condition))

// ===== Library Classes =====
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <stdexcept>
#include <ctime>
using namespace std;

// ===== Class Demonstration =====
class Demo
{
public:
    int value;
    Demo(int v) : value(v) {}
    void show() const
    {
        cout << "Demo class value: " << value << endl;
    }
};

// ===== Data Types & Library Demo =====
int main()
{
    // Data types
    char c = 'A';
    int i = 42;
    float f = 3.14;
    double d = 2.718281828;
    bool b = true;
    string s = "Hello C++";

    cout << "\nchar: " << c << endl;
    cout << "int: " << i << endl;
    cout << "float: " << f << endl;
    cout << "double: " << d << endl;
    cout << "bool: " << b << endl;
    cout << "string: " << s << endl;

    // Library classes
    // <sstream>
    stringstream ss;
    ss << "123";
    int num;
    ss >> num;
    cout << "\n<sstream> converted string to int: " << num << endl;

    // <vector>
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    for (int x : v) cout << x << " ";
    cout << endl;

    // <stdexcept>
    try
    {
        if (v.size() > 3) throw runtime_error("Vector too large.");
    }
    catch (const exception& e)
    {
        cout << "\n<stdexcept> caught: " << e.what() << endl;
    }

    // <ctime>
    time_t now = time(0);
    cout << "\n<ctime> Current time is: " << ctime(&now);

    // <fstream>
    ofstream file("example.txt");
    file << "Hello World";
    file.close();
    cout << "\n<fstream>: wrote to example.txt" << endl;

    // Keywords
    for (int j = 0 ; j < 3; j++)
    {
        if (j == 1)
        {
            continue;
        }
        cout << "for loop iteration: " << j << endl;
    }

    Demo demo(99);
    demo.show();

    return 0;
}
