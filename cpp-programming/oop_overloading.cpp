//
// Created by josh on 10/8/25.
//

// Classes in C++ typically begin with an uppercase letter.
// Any members of a class that appear without an access specifier will default to 'private'.
// Remember the notion: public interface, private data.
// An overloaded constructor method is useful to assign default values to vars without passing values to constructor.

#include <string>
#include <iostream>
using namespace std;

class Dog {
    int age, weight;    // Private
    string colour;

    // Public interface
    public:
        void bark() { cout << "WOOF!" << endl; }
        // Inline overloaded bark method to output string arg when called
        void bark(string noise) { cout << noise << endl; }

        // Constructor prototype
        Dog(int, int, string);
        Dog();
        Dog(int, int);

        // Destructor
        ~Dog();

        // Getters
        int getAge() { return age; }
        int getWeight() { return weight; }
        string getColour() { return colour; }
};

// Constructor definition
Dog::Dog(int age, int weight, string colour) {
    // Where class method definition has an argument of the same name as a class member, use 'this ->'
    this -> age = age;
    this -> weight = weight;
    this -> colour = colour;
}

// Default constructor method
Dog::Dog() {
    // Default values to class variables when an object is created without passing any args
    age = 1;
    weight = 2;
    colour = "black";
}

// Overloaded constructor method
Dog::Dog(int age, int weight) {
    this -> age = age;
    this -> weight = weight;
    colour = "white";
}

// Destructor definition
Dog::~Dog() {
    cout << "Object destroyed." << endl;
}

int main() {
    Dog fido(3, 15, "brown");
    Dog pooch(4, 18, "grey");
    Dog rex;    // Don't add parentheses after an object name when creating an object without passing arguments.
    Dog sammy(2, 6);

    cout << "Fido is a " << fido.getColour() << " dog." << endl;
    cout << "Fido is " << fido.getAge() << " years old." << endl;
    cout << "Fido weighs " << fido.getWeight() << " pounds." << endl;
    fido.bark();

    cout << "Pooch is a " << pooch.getAge()
         << " year old " << pooch.getColour()
         << " dog who weighs " << pooch.getWeight()
         << " pounds. ";
    pooch.bark();

    cout << "Rex is a " << rex.getAge()
         << " year old " << rex.getColour()
         << " dog who weighs " << rex.getWeight()
         << " pounds. ";
    rex.bark("GRRR!");

    cout << "Sammy is a " << sammy.getAge()
         << " year old " << sammy.getColour()
         << " dog who weighs " << sammy.getWeight()
         << " pounds. ";
    sammy.bark("BOWOW!");



    return 0;
}

