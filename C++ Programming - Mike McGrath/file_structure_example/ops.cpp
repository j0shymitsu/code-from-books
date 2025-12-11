#include "ops.h"        // Reference header file
#include <iostream>
using namespace std;

// Initialise status
Calculator::Calculator() { status = true; }     

// Display instructions
void Calculator::launch() 
{
    cout << endl 
         << "*** SUM CALCULATOR ***" << endl
         << "Enter a number, an operator (+, -, *, /), and another number." << endl 
         << "Hit Return to calculate. Enter zero to exit." << endl;
}

// Get expression
void Calculator::readInput() 
{
    cout << "> "; cin >> num1;       // Get 1st num

    if (num1 == 0) 
    {
        status = false;
    } 
    else 
    {
        cin >> oper; cin >> num2;   // Get rest of numbers if not 0
    }
}

// Display result
void Calculator::writeOutput() 
{
    if (status) switch (oper)       // If continuing
    {             
        case '+' : { cout << (num1 + num2) << endl; break; }
        case '-' : { cout << (num1 - num2) << endl; break; }
        case '*' : { cout << (num1 * num2) << endl; break; }
        case '/' : 
            if (num2 != 0) 
            {
                cout << (num1 / num2) << endl;
            } 
            else 
            {
                cout << "Cannot divide by zero" << endl;
            }
    }
}

// Get current status
bool Calculator::run() { return status; }       
