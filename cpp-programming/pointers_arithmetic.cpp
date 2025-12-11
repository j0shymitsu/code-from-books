//
// Created by josh on 10/3/25.
//

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Pointer initialised with mem addr of element 0
    int* ptr = nums;

    // Output mem addr of element 0 and value
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

    // Increment pointer and output to new mem addr: element 1
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

    // Increment again: element 2
    ptr++;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr;

    // Decrement pointer by two places and output mem addr
    ptr -= 2;
    cout << endl << "ptr at: " << ptr << " gets: " << *ptr;
    cout << endl;

    // Output stored value in each element of arr
    for (int i = 0; i < 10; i++)
    {
        cout << endl << "Element: " << i;
        cout << "    Value: " << *ptr;
        ptr++;
    }

    cout << endl;

    return 0;
}