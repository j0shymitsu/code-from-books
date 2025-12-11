//
// Created by josh on 9/11/25.
//

// ===== Predefined Functions =====
//
// at(x)        -> Gets the value contained at the specified element
// back()       -> Gets the value at the final statement
// clear()      -> Removes all vector elements
// empty()      -> Returns true (1) if the vector is empty, ore returns false (0) otherwise
// front()      -> Gets the value in the first element
// pop_back()   -> Removes the final element
// push_back(x) -> Adds an element to the end of the vector, containing the specified value
// size()       -> Gets the number of elements

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec(3, 100);    // 3 elements; value 100

    cout << "Vector size: " << vec.size() << endl;
    cout << "Is empty?: " << vec.empty() << endl;
    cout << "First element: " << vec.at(0) << endl;

    // Remove final element
    vec.pop_back();
    cout << "Vector size: " << vec.size() << endl;
    cout << "Final element: " << vec.back() << endl;

    // Remove all elements
    vec.clear();
    cout << "Vector size: " << vec.size() << endl;

    // Add an element
    vec.push_back(200);
    cout << "Vector size: " << vec.size() << endl;
    cout << "First element: " << vec.front() << endl;

    return 0;
}