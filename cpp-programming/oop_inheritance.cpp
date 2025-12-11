//
// Created by josh on 10/9/25.
//

// Inheritance is the second principle of OOP.
// A derived class declaration adds a colon ':' after its class name.

#include <iostream>
using namespace std;

class Polygon {
    protected:
        int width, height;
    public:
        void setValues(int w, int h) { width = w; height = h; }
};

class Rectangle : public Polygon {
    public:
        int area() { return width * height; }
};

class Triangle : public Polygon {
    public:
        int area() { return ((width * height) / 2); }
};

// Main
int main() {
    // Create instances of each derived class
    Rectangle rect;
    Triangle trgl;

    // Insert calls to method to initialise inherited variables
    rect.setValues(4, 5);
    trgl.setValues(4, 5);

    // Output value
    cout << "Rectangle area: " << rect.area() << endl;
    cout << "Triangle area: " << trgl.area() << endl;

    return 0;
}
