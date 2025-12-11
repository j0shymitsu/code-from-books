package com.josh.headfirst.chapter4;

class GoodDog {

    private int size;   // Make instance variables private
    
    public int getSize() {    // Make getter and setter methods public
        return size;
    }

    public void setSize(int s) {
        size = s;
    }

    void bark() {
        if (size > 60) {
            System.out.println("Woof! Woof!");
        } else if (size > 14) {
            System.out.println("Ruff! Ruff!");
        } else {
            System.out.println("Yip! Yip!");
        }
    }
}

