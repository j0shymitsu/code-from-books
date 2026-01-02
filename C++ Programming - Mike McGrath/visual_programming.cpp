//
// Created by josh on 1/2/26.
//

#include <ctime>        // Includes time support
#include <iostream>
using namespace std;

int main()
{
    int i, j, k, nums[50];                      // 3 trivial integer variables and an array of fifty integers
    srand((int)time(0));                  // Seeds random number generator with the current time
    for (i = 0; i < 50; i++) { nums[i] = i; }   // Fill array elements 1-49 with ints 1-49

    // Randomise the values from 1-49
    for (i = 1; i < 50; i++)
    {
        j = (rand() % 49) + 1;
        k = nums[i]; nums[i] = nums[j]; nums[j] = k;
    }

    cout << "Your six lucky numbers are: ";

    for (i = 1; i < 7; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
