package com.josh.headfirst.chapter3;

class Dog
{
    String name;

    public void bark()
    {
        System.out.println(name + " says ruff!");
    }

    public static void main(String[] args)
    {
        // Make a dog object and access it
        Dog dog1 = new Dog();
        dog1.bark();
        dog1.name = "Bart";

        // Create dog array
        Dog[] myDogs = new Dog[3];
        // Put some dogs in it
        myDogs[0] = new Dog();
        myDogs[1] = new Dog();
        myDogs[2] = dog1;

        // Access dogs using array ref
        myDogs[0].name = "Fred";
        myDogs[1].name = "Marge";

        // Print names
        System.out.print("Last dogs name is ");
        System.out.println(myDogs[2].name);

        // Loop through array, tell dogs to bark
        int x = 0;

        while (x < myDogs.length)
        {
            myDogs[x].bark();
            x = x + 1;
        }
    }
}
