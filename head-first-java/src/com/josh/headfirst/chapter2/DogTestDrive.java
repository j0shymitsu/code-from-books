package com.josh.headfirst.chapter2;

class DogTestDrive
{
    public static void main(String[] args)
    {
        Dog d = new Dog();  // Make a dog object
        d.size = 40;        // Use the "dot operator" to set the size of the dog
        d.bark();           // Call "bark" method
    }
}
