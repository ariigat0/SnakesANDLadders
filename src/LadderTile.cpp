#include "LadderTile.h"

LadderTile::LadderTile(int _n) : Tile(_n) { reward = 3; }

LadderTile::~LadderTile() { }

string LadderTile::getType() { return "L"; }

int LadderTile::getBonus() { return getReward(); }

int LadderTile::getReward() { return reward; }

void LadderTile::setReward(int _reward) { reward = _reward; }

ostream& operator<<(ostream& out, LadderTile* lt) {
	out << lt->toString();
	return out;
}