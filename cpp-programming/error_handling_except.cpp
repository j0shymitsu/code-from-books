//
// Created by josh on 9/30/25.
//

#include <stdexcept>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++";
    int num = 1000000000;

    try
    {
        ifstream reader("nonsuch.txt");

        if (!reader)
        {
            throw logic_error("File not found.");
        }
    }
    catch (out_of_range &e)
    {
        cerr << "Range exception: " << e.what() << endl;
        cerr << "Exception type: " << typeid(e).name();
        cerr << endl << "Program terminated." << endl;
        return -1;
    }
    catch (exception &e)
    {
        cerr << "Exception: " << e.what() << endl;
        cerr << "Exception type: " << typeid(e).name() << endl;
    }

    cout << "Program continues..." << endl;
    return 0;
}