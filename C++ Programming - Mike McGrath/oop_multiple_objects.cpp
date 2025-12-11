//
// Created by josh on 10/8/25.
//

// Classes in C++ typically begin with an uppercase letter.
// Any members of a class that appear without an access specifier will default to 'private'.
// Remember the notion: public interface, private data.

#include <string>
#include <iostream>
using namespace std;

class Dog {
    int age, weight;    // Private
    string colour;

    // Public interface
    public:
        void bark() { cout << "WOOF!" << endl; }

        // Setter prototype
        void setValues(int, int, string);

        // Getters
        int getAge() { return age; }
        int getWeight() { return weight; }
        string getColour() { return colour; }
};

// Scope resolution operator
void Dog::setValues(int age, int weight, string colour) {
    // Where class method definition has an argument of the same name as a class member, use 'this ->'
    this -> age = age;
    this -> weight = weight;
    this -> colour = colour;
}

int main() {
    Dog fido;
    fido.setValues(3, 15, "brown");

    Dog pooch;
    pooch.setValues(4, 18, "grey");

    cout << "Fido is a " << fido.getColour() << " dog." << endl;
    cout << "Fido is " << fido.getAge() << " years old." << endl;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl;
    fido.bark();

    cout << "Pooch is a " << pooch.getAge();
        cout << " year old " << pooch.getColour();
        cout << " dog who weighs " << pooch.getWeight();
        cout << " pounds. ";
    pooch.bark();

    return 0;
}

