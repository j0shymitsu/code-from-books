//
// Created by josh on 9/16/25.
//

// In C++, each case statement is followed by the 'break' keyword

#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    switch (num)
    {
        case 1 : cout << num << ": Monday"; break;
        case 2 : cout << num << ": Tuesday"; break;
        case 3 : cout << num << ": Wednesday"; break;
        case 4 : cout << num << ": Thursday"; break;
        case 5 : cout << num << ": Friday"; break;
        default : cout << num << ": Weekend day";   // No break on default
    }

    return 0;
}