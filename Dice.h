#pragma once
#include <iostream>

using namespace std;

#ifndef DICE
#define DICE

class Dice 
{
    private:
        int num;

    public:
        Dice();
        ~Dice();

        int getDice();
    
};


#endif //DICE