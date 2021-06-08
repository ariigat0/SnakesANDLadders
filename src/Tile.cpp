#include "Tile.h"

Tile::Tile() { number = 0; }

Tile::Tile(int _number) { number = _number; }

Tile::~Tile() { }

string Tile::toString() { return getType(); }

int Tile::getNumber() { return number; }

int Tile::getBonus() { 	return 0; }

string Tile::getType() { return type; }

void Tile::setNumber(int _n) { number = _n; }

int Tile::operator+(Tile& t) { return this->number + t.getBonus(); }

void Tile::setType(string _type) { type = _type; }

ostream& operator<<(ostream& out, Tile* tile) {
	out << tile->toString();
	return out;
}

