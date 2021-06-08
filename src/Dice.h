#pragma once
#include <iostream>

#ifndef DICE
#define DICE

class Dice {
private:
	int diceRoll;

public:
	Dice();
	~Dice();

	int getRoll();
};

#endif // !DICE