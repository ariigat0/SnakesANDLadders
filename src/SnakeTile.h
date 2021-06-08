#pragma once
#include <iostream>
#include "Tile.h"

using namespace std;

#ifndef SNAKE_TILE
#define SNAKE_TILE

class SnakeTile : public Tile {
private:
	int penalty;

public:
	SnakeTile(int _n);
	~SnakeTile();

	string getType();
	int getBonus();
	int getPenalty();
	void setPenalty(int _penalty);
	friend ostream& operator << (ostream& out, SnakeTile* st);
};

#endif // !SNAKE_TILE