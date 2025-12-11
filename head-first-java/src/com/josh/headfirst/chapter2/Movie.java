package com.josh.headfirst.chapter2;

class Movie
{
    String title;
    String genre;
    int rating;
    
    void playIt()
    {
        System.out.print("Playing the movie: " + this.title);
    }
}

