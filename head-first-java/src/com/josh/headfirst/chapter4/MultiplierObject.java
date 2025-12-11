package com.josh.headfirst.chapter4;

class MultiplierObject
{
    int value;

    public int calculateValue(int factor)
    {
        if (value > 100)    // If value is greater than 100, multiply by factor; else multiply by (5-factor)
        {
            return value * factor;
        } else
        {
            return value * (5 - factor);
        }
    }
}
