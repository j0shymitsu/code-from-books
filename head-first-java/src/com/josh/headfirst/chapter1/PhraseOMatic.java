package com.josh.headfirst.chapter1;

public class PhraseOMatic
{
    public static void main(String[] args)
    {

        // Three sets of words
        String[] wordListOne = {"24/7", "multi-Tier", "30,000 foot", "B-to-B", "win-win", "front-end", "web-based",
                "pervasive", "smart", "six-sigma", "critical-path", "dynamic"};

        String[] wordListTwo = {"empowered", "sticky", "value-added", "oriented", "centric", "distributed", "clustered",
                "branded", "outside-the-box", "positioned", "networked", "focused", "leveraged", "aligned", "targeted",
                "shared", "cooperative", "accelerated"};

        String[] wordListThree = {"process", "tipping-point", "solution", "architecture", "core competency", "strategy",
                "mindshare", "portal", "space", "vision", "paradigm", "mission"};

        // Find out how many words in each list
        int oneLength = wordListOne.length;
        int twoLength = wordListTwo.length;
        int threeLength = wordListThree.length;

        // Generate three random numbers
        int rand1 = (int)(Math.random() * oneLength);
        int rand2 = (int)(Math.random() * twoLength);
        int rand3 = (int)(Math.random() * threeLength);

        // Build a phrase
        String phrase = wordListOne[rand1] + " " + wordListTwo[rand2] + " " + wordListThree[rand3];

        // Print the phrase
        System.out.println("What we need is a " + phrase + "!");
    }
}