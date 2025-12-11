//
// Created by josh on 9/30/25.
//
//
// "what()" gives the description of the exception (object) thrown in a try/catch block. The <stdexcept> library
// defines a number of exception classes (shown with their relationships):
//
// EXCEPTION CLASS                  DESCRIPTION
// exception                        General exception
//      bad_alloc                   Failure allocating storage
//      bad_cast                    Failure casing data type
//      bad_typeid                  Failure referencing typeid
//      logic_error                 Logic exception
//          domain_error            Invalid domain
//          invalid_argument        Invalid argument in call
//          length_error            Invalid length for container
//          out_of_range            Invalid element range
//      runtime_error               Runtime exception
//          range_error             Invalid range request
//          overflow_error          Invalid arithmetic request

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++";

    try
    {
        lang.erase(4, 6);
    }
    catch (exception &error)
    {
        cerr << "Exception: " << error.what() << endl;
    }
    return 0;
}