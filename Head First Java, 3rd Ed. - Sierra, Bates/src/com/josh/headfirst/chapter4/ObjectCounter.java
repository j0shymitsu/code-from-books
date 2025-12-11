package com.josh.headfirst.chapter4;

public class ObjectCounter
{
    // Instance variables
    int individualCount = 0;

    // Constructors here (if any)

    // Main method
    public static void main(String[] args) 
    {

        int totalObjects = 0;
        ObjectCounter[] objectArray = new ObjectCounter[20];
        int currentIndex = 0;
        
        while(currentIndex < 7)
        {
            objectArray[currentIndex] = new ObjectCounter();
            objectArray[currentIndex].individualCount = objectArray[currentIndex].individualCount + 1;
            totalObjects = totalObjects + 1;
            totalObjects = totalObjects + objectArray[currentIndex].ifBelowThreshold(currentIndex);
            currentIndex = currentIndex + 1;
        }

        System.out.println(totalObjects + " " + objectArray[1].individualCount);
    }  

    // Other methods
    public int ifBelowThreshold(int currentIndex)
    {
        if(currentIndex < 5)
        {
            ObjectCounter newObject = new ObjectCounter();
            newObject.individualCount = newObject.individualCount + 1;
            return 1;
        }

        return 0;
    }  
}
