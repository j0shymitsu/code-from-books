//
// Created by josh on 9/25/25.
//

// Modes:
// ios::out     ->      Open a file to write output
// ios::in      ->      Open a file to read input
// ios::app     ->      Open a file to append output at the end of any existing content
// ios::trunc   ->      Truncate the existing file (default)
// ios::ate     ->      Open a file without truncating and allow data to be written anywhere in the file
// ios::binary  ->      Treat the file as a binary format rather than text so the data may be stored in non-text

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string info = "\n\tThe Ballad of Reading Gaol";
    info.append("\n\t\t\tOscar Wilde 1898");

    ofstream writer("poem.txt", ios::app);

    if (!writer)
    {
        cout << "Error opening file for output" << endl;
        return -1;  // Signal error
    }

    writer << info << endl;
    writer.close();

    return 0;
}