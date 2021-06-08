#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef TILE
#define TILE

class Tile {
private:
	friend class Board;
	int number;
	string type = "N";
	void setType(string _type);

public:
	Tile();
	Tile(int _number);
	~Tile();

	string toString();
	int getNumber();
	virtual int getBonus();
	virtual string getType();
	void setNumber(int _n);
	friend ostream& operator << (ostream& out, Tile* tile);
	int operator+(Tile& t);
};

#endif // !TILE