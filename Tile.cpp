#include "Tile.h"

Tile::Tile()
{
    type = "?";
    id = 0;
}

Tile::Tile(int _id, string _type)
{
    id = _id;
    type = _type;
}

Tile::~Tile()
{

}

//getters
int Tile::getId()
{
    return id;
}

string Tile::getType()
{
    return type;
}

string Tile::toString()
{
    return type;
}

//setters

void Tile::setId(int id)
{
    this->id = id;
}

void Tile::setType(string type)
{
    this->type = type;
}

