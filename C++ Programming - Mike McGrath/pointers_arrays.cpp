//
// Created by josh on 10/6/25.
//

// A regular char can be assigned a single character value but a pointer to a char array can be assigned a string of chars
// Multiple strings can be stored in a char pointer array

#include <iostream>
using namespace std;

int main()
{
    char letters[8] = {'C', '+', '+', ' ', 'F', 'u', 'n', '\0'};
    char* text = "C++ Fun";

    char* term = "Element ";
    char* lang = "C++";

    char* ap1[3] = {"Great", "Program", "Code "};   // char pointer array w three string values
    char* ap2[3] = {lang, "is", "Fun"};
    char* ap3[3] = {ap2[0], ap2[1], ap1[0]};        // master char pointer arrays
    char* ap4[3] = {ap1[2], ap2[1], ap2[2]};

    cout << letters << endl;
    cout << text << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << term << i << " ";
        cout << ap1[i] << " ";
        cout << ap2[i] << " ";
        cout << ap3[i] << " ";
        cout << ap4[i] << endl;
    }

    return 0;
}