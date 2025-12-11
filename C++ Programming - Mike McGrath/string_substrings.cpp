//
// Created by josh on 9/22/25.
//

// 'find()' takes two arguments: the substring to search for, and the index to start at.
// It returns the index number of the first occurrence.
// Failure returns -1.

#include <string>
#include <iostream>
using namespace std;

int main()
{
    string text = "I can resist anything but temptation";
    int num;

    num = text.find("resist", 0);
    cout << "Position: " << num << endl;

    num = text.find("nonsuch", 0);
    cout << "Result: " << num << endl;

    num = text.find_first_of("If");
    cout << "First I: " << num << endl;

    // Position of first character not within "If" substring
    num = text.find_first_not_of("If");
    cout << "First not I: " << num << endl;

    num = text.find_last_of("t");
    cout << "Last t: " << num << endl;

    // Position of last character that is not a 't'
    num = text.find_last_not_of("t");
    cout << "Last not t: " << num << endl;

    return 0;
}