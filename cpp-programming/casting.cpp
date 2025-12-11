//
// Created by josh on 9/16/25.
//

// variable-name = (data-type) variable-name
// OR
// variable-name = static_cast <data-type> variable-name;   <- Preferred due to use of angled bracket

#include <iostream>
using namespace std;

int main()
{
    int num = 7, factor = 2;
    char letter = 'A';
    float result = 0.0;

    cout << "Integer division: " << (num / factor) << endl;

    // Cast to float
    result = (float) (num)/factor;
    cout << "Cast division float: " << result << endl;

    // Cast char to int (ASCII)
    num = static_cast <int> (letter);
    cout << "Cast character int: " << num << endl;

    // In reverse
    letter = static_cast <char> (70);
    cout << "Cast integer char: " << letter << endl;

    return 0;
}

