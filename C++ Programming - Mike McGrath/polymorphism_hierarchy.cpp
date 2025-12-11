// It is sometimes desirable to derive an ADT from another ADT to construct complex hierarchy of classes.

#include <iostream>
using namespace std;

// Base class
class Boat
{
    protected:
        int length;
    public:
        int getLength() { return length; }
        virtual void Model() = 0;
};

// Derived class
class Sailboat : public Boat
{
    // Variables, accessor method, pure virtual method
    protected:
        int mast;
    public:
        int getMast() { return mast; }
        virtual void Boom() = 0;
};

class Laser : public Sailboat
{
    // All members allow public access
    public:
    
    // Call to constructor with assigned vars
    Laser() { mast = 19; length = 35; }

    // Call destructor
    ~Laser();

    // Pure virtual methods
    void Model() { cout << "Laser Classic" << endl; }
    void Boom() { cout << "Boom: 14ft" << endl; }
};

class Powerboat : public Boat
{
    protected:
        int engine;
    public:
        int getEngineSize() { return engine; }
};

int main()
{
    // Bottom tier of hierarchy
    Laser* pLaser = new Laser;

    pLaser -> Model();
    cout << "Length: " << pLaser -> getLength() << "ft" << endl;
    cout << "Height: " << pLaser -> getMast() << "ft" << endl;
    pLaser -> Boom();

    return 0;
}