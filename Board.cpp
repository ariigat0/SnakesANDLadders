#include "Board.h"

Board::Board()
{
    for(int i=1; i<=TILES; i++)
    {
        tiles[i-1]= new Tile(i, "N");
    }

    for(int i=1; i<=SNAKES; i++)
    {
        int randsnake= rand()%TILES;
        do
        {
            randsnake= rand()%TILES;
        }
        while(tiles[randsnake]->getType()=="S");
        
        tiles[randsnake]->setType("S");
        
    }

    for(int i=1; i<=LADDERS; i++)
    {
        int randladder= rand()%(TILES-3);
        do
        {
            randladder= rand()%(TILES-3);
        }
        while(tiles[randladder]->getType()=="L" && tiles[randladder]->getType()=="S");
        
        tiles[randladder]->setType("L");
        
    }
}

Board::~Board()
{

}

string Board::toString()
{
    string msg = "";

    for(int i=0; i<TILES; i++)
    {
        msg += tiles[i]->toString();
        msg += "\t";

        if ((i+1)%10==0)
        {
            msg += "\n";
        } 
    }
    return msg;
}

string Board::getTile(int pos)
{
    return tiles[pos]->getType();
}

void Board::setPlayer(int prevPos, int newPos, string type)
{
    tiles[prevPos-1]->setType("N");
    tiles[newPos]->setType(type);
}