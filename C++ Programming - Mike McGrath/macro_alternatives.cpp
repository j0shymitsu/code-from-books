// "else" can also be added to macro conditional tests
// cpp -dM [file] will display a list of the compilers predefined macros

#if defined _WIN32
    #define PLATFORM "Windows"
#elif defined __linux
    #define PLATFORM "Linux"
#endif

#include <iostream>
using namespace std;

int main()
{
    // identify host platform
    cout << PLATFORM << " System" << endl;

    // statements to execute for specific platforms
    if (PLATFORM == "Windows")
    {
        cout << "Performing Windows only tasks..." << endl;
    }

    if (PLATFORM == "Linux")
    {
        cout << "Performing Linux only tasks..." << endl;
    }

    return 0;
}