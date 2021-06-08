#pragma once
#include <iostream>
#include "Tile.h"

using namespace std;

#ifndef LADDER_TILE
#define LADDER_TILE

class LadderTile : public Tile {
private:
	int reward;

public:
	LadderTile(int _n);
	~LadderTile();

	string getType();
	int getBonus();
	int getReward();
	void setReward(int _reward);
	friend ostream& operator << (ostream& out, LadderTile* lt);
};

#endif // !LADDER_TILE