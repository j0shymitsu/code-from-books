//
// Created by josh on 9/25/25.
//

// "ifstream" (Input Filestream) has a "get()" function that can be used in a loop to read a file and assign each char

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    int i;

    ifstream reader("poem.txt");

    if (!reader)
    {
        cout << "Error opening file!" << endl;
        return -1;
    }

    for (i = 0; !reader.eof(); i++)
    {
        getline(reader, line);
        cout << line << endl;   // getline() stops reading when it meets \n
    }

    reader.close();
    cout << "Iterations: " << i << endl;

    return 0;
}