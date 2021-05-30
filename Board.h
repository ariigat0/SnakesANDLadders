#pragma once
#include <iostream>
#include <string>
#include "Tile.h"

using namespace std;

#ifndef BOARD
#define BOARD
#define TILES 30
#define SNAKES 3
#define LADDERS 3

class Board
{
    private:
        Tile*tiles[TILES];

    public:
        Board();
        ~Board();
    
        string toString();
        string getTile(int pos);
        void setPlayer(int prevPos, int newPos, string type);
};

#endif //BOARD


