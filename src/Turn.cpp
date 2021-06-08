#include "Turn.h"

Turn::Turn() { totalTurns = 1; }

Turn::~Turn() { }

void Turn::AddTurn() { totalTurns++; }

int Turn::getTotalTurns() { return totalTurns; }

ostream& operator<<(ostream& out, Turn* turn) {
	out << "Turn #" << to_string(turn->getTotalTurns()) << "\n";
	return out;
}
