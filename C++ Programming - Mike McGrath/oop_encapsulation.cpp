//
// Created by josh on 10/8/25.
//

// Classes in C++ typically begin with an uppercase letter.
// Any members of a class that appear without an access specifier will default to 'private'.
// Remember the notion: public interface, private data.

#include <string>
#include <iostream>
using namespace std;

class Dog
{
    int age, weight;    // Private
    string colour;

    // Public interface
    public:
    void bark()
    {
        cout << "WOOF!" << endl;
    }

    // Setters
    void setAge(int yrs)
    {
        age = yrs;
    }
    void setWeight(int lbs)
    {
        weight = lbs;
    }
    void setColour(string clr)
    {
        colour = clr;
    }

    // Getters
    int getAge()
    {
        return age;
    }
    int getWeight()
    {
        return weight;
    }
    string getColour()
    {
        return colour;
    }
};

int main()
{
    Dog fido;
    fido.setAge(3);
    fido.setWeight(15);
    fido.setColour("brown");

    cout << "Fido is a " << fido.getColour() << " dog." << endl;
    cout << "Fido is " << fido.getAge() << " years old." << endl;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl;
    fido.bark();

    return 0;
}

