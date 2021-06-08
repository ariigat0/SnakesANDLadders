#include "SnakeTile.h"

SnakeTile::SnakeTile(int _n) : Tile(_n) { penalty = -3; }

SnakeTile::~SnakeTile() { }

string SnakeTile::getType() { return "S"; }

int SnakeTile::getBonus() { return getPenalty(); }

int SnakeTile::getPenalty() { return penalty; }

void SnakeTile::setPenalty(int _penalty) { penalty = _penalty; }

ostream& operator<<(ostream& out, SnakeTile* st) {
	out << st->toString();
	return out;
}