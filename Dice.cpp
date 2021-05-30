#include "Dice.h"

Dice::Dice()
{
    num = 0;

}

Dice::~Dice()
{

}

int Dice::getDice()
{
    num = rand() % 6+1;
    return num;
}


