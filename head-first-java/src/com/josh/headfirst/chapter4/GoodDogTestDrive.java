package com.josh.headfirst.chapter4;

class GoodDogTestDrive
{
    public static void main(String[] args)
    {
        GoodDog one = new GoodDog();
        one.setSize(70);

        GoodDog two = new GoodDog();
        two.setSize(8);

        System.out.println("com.josh.headfirst.chapter4.Dog one: " + one.getSize());
        System.out.println("com.josh.headfirst.chapter4.Dog two: " + two.getSize());

        one.bark();
        two.bark();
    }
}
