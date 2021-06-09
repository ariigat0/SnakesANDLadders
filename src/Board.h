#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Tile.h"
#include "LadderTile.h"
#include "SnakeTile.h"

using namespace std;

#ifndef BOARD
#define BOARD

class Board 
{
private:
	int nTiles;
	vector<Tile*>tiles;

public:
	Board(int _tiles, int _snakes, int _ladders);
	~Board();

	void toString();
	string getTile(int pos);
	void setPlayer(int prevPos, int newPos, string type);
	int getNumberTiles();
};

#endif //BOARD


