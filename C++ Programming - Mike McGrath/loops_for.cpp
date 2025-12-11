//
// Created by josh on 9/16/25.
//

#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for (int i = 1; i < 4; i++)
    {
        cout << "Loop iteration: " << i << endl;

        for (int j = 1; j < 4; j++)
        {
            cout << "   Inner loop iteration: " << j << endl;
        }
    }
}