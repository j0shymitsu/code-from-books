#include <iostream>
using namespace std;

// Base class
class Bird
{
    public:
        virtual void Talk() const { cout << "A bird talks... " << endl; }
        virtual void Fly() const { cout << "A bird flies... " << endl; }
};

// Derived classes
class Pigeon : public Bird
{
    public:
        void Talk() const { cout << "Coo! Coo! " << endl; }
        void Fly() const { cout << "A pigeon flies away... " << endl; }
};

class Chicken : public Bird
{
    public:
        void Talk() const { cout << "Cluck! Cluck! " << endl; }
        void Fly() const { cout << "I`m just a chicken - I can`t fly! " << endl; }
};

int main()
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;

    pPigeon -> Talk();
    pPigeon -> Fly();
    pChicken -> Talk();
    pChicken -> Fly();
    
    // Base class methods can still be called explicitly using the scope resolution operator, but may be incosistent:
    pPigeon -> Bird::Talk();
    pChicken -> Bird::Fly();    // Inappropriate call

    return 0;
}