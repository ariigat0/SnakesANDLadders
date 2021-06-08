#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef TURN
#define TURN

class Turn {
private:
	int totalTurns;

public:
	Turn();
	~Turn();

	void AddTurn();
	int getTotalTurns();
	friend ostream& operator << (ostream& out, Turn* turn);
};

#endif // !TURN