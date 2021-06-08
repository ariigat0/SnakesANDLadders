#pragma once
#include <iostream>
#include <string>

using namespace std;

#ifndef PLAYER
#define PLAYER

class Player {
private:
	string name;
	int pos, prevPos;

public:
	Player(string _name);
	~Player();

	string getName();
	int getPos();
	int getPrevPos();
	void setPos(int _pos);
};

#endif // !PLAYER
