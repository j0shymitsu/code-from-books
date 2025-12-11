//
// Created by josh on 9/25/25.
//

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string poem = "\n\tI never saw a man who looked";

    poem.append("\n\tWith such wistful eye");
    poem.append("\n\tUpon that little tent of blue");
    poem.append("\n\tWhich prisoners call the sky");

    // Output filestream object
    ofstream writer("poem.txt");

    // Write to file or exit
    if (!writer)
    {
        cout << "Error opening file for output" << endl;
        return -1;
    }

    writer << poem << endl;
    writer.close();

    return 0;
}