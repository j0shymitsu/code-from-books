//
// Created by josh on 10/9/25.
//

// Derived classes do not inherit their parents constructor and destructor
// The default constructor of the base class is always called when a new object of a derived class is created.
// Each class automatically has an empty default constructor and destructor.

#include <iostream>
using namespace std;

class Parent {
    // Class members go here

    // Public access specifier / Default constructor to output text
    public:
        Parent() { cout << "Default Parent constructor called."; }
        Parent(int a) { cout << endl << "Overloaded Parent constructor called."; }
};

class Daughter : public Parent {
    public:
        Daughter() { cout << endl << "Derived Daughter class default constructor called."; }
};

class Son : public Parent {
    public:
        Son(int a) : Parent(a) { cout << endl << "Derived Son class overloaded constructor called."; }
};

// Main
int main() {
    Daughter emma;
    Son andrew(0);
    return 0;
}