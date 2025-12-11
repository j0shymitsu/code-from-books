package com.josh.headfirst.chapter2;

class TapeDeckTestDrive
{
    public static void main(String[] args)
    {
        TapeDeck t = new TapeDeck();    // Fixed line

        t.canRecord = true;
        t.playTape();

        if (t.canRecord == true)
        {
            t.recordTape();
        }
    }
}
