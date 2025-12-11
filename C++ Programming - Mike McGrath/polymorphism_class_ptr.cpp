#include <iostream>
using namespace std;

// Base class
class Base
{
    public:
        void Identify(long adr) const
        {
            cout << "Base class called by 0x" << hex << adr << endl;
        }
};
class SubA : public Base { };
class SubB : public Base { };

int main()
{
    // Base class pointers
    Base* ptrA = new SubA;
    Base* ptrB = new SubB;

    // Call base class method using pointers
    ptrA -> Identify((long)&ptrA);
    ptrB -> Identify((long)&ptrB);

    return 0;
}



