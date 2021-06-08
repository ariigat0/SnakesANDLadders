#include "Dice.h"

Dice::Dice() { diceRoll = 0; }

Dice::~Dice() { }

int Dice::getRoll() {
	diceRoll = rand() % 6 + 1;
	return diceRoll;
}


