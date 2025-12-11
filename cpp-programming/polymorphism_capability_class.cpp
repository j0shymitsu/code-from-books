// Classes whose sole purpose is to allow other classes to be derived from them are called "capability classes"

#include <iostream>
using namespace std;

// No data but declare virtual methods to be overridden
class Bird
{
    public:
        virtual int Talk() const { return -1; } // Return int not void
        virtual int Fly() const { return -1; }
};

class Pigeon : public Bird
{
    public:
        int Talk() const { cout << "Coo! Coo!" << endl; return 0; }
        int Fly() const { cout << "A pigeon flies away..." << endl; return 0; }
};

class Chicken : public Bird
{
    public:
        int Talk() const { cout << "Cluck! Cluck!" << endl; return 0; }
        int Fly() const { cout << "I`m just a chicken - I can`t fly!" << endl; return 0; }
};

// Declare a main method creating base class pointers binding the derived class
int main()
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;

    // Insert method calls and a statement to terminate the program when error is met
    pPigeon -> Talk();
    pChicken -> Talk();

    pPigeon -> Bird::Talk();
    if (-1) { cout << "Error! - Exiting... " << endl; return 0; }

    pPigeon -> Fly();       // Call will not be made
    pChicken -> Fly();      // Call will not be made
    return 0;               // Statement will not be executed
}

// Notes:

// Capability class methods are intended to be overridden in derived classes and should not be called explicitly.