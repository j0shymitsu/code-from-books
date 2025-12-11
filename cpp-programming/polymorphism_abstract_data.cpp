// An Abstract Data Type (ADT) represents a concept rather than a tangible object
// A base class can be made into an ADT by initialising one of more of its methods with zero.

#include <iostream>
using namespace std;

// Base ADT class
class Shape
{
    public:
        // Pure virtual method
        virtual int getArea() = 0;
        virtual int getEdge() = 0;
        virtual void Draw() = 0;
};

// Derived class with private variables
class Rect : public Shape
{
    private:
        int height, width;

    // Public constructor/destructor
    public:
        Rect(int initWidth, int initHeight)
        {
            height = initHeight;
            width = initWidth;
        }

        ~Rect();

    // Overrides
    int getArea() { return height * width; }
    int getEdge() { return (2 * height) + (2 * width); }

    void Draw()
    {
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                cout << "x ";
            }
            cout << endl;
        }
    }
};

int main()
{   
    // Create two instances of Rect - a square and quadrilateral
    Shape* pQuad = new Rect(3, 7);
    Shape* pSquare = new Rect(5, 5);

    pQuad -> Draw();
    cout << "Area is " << pQuad -> getArea() << endl;
    cout << "Perimeter is " << pQuad -> getEdge() << endl;

    pSquare -> Draw();
    cout << "Area is " << pSquare -> getArea() << endl;
    cout << "Perimeter is " << pSquare -> getEdge() << endl;

    return 0;
}


