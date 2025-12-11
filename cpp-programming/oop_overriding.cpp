//
// Created by josh on 10/9/25.
//

// A method can be declared in a derived class to override a matching method in the base class.
// Both method declarations must have the same name, args, and return type.
// This effectively hides the base class method as it becomes inaccessible unless it is called explicitly.
// Take care: overriding a method in a derived class can hide ALL overloaded methods of that name and base class!

#include <iostream>
using namespace std;

class Man {
    // Class members
    public:
        void speak() { cout << "Hello, world! " << endl; }
        // Overloaded inline output method
        void speak(string msg) { cout << " " << msg << endl; }
};

class Hombre : public Man {
    // Class members
    // Access specifier and method to override the overloaded base class method
    public:
        void speak(string msg) { cout << msg << endl;}
};

// Main
int main() {
    Man henry;
    Hombre enrique;

    henry.speak();
    henry.speak("It's a beautiful evening.");

    enrique.speak("Hola!");
    enrique.Man::speak("Es una tarde hermosa.");
    return 0;
}