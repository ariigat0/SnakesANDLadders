#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Board.h"
#include "Player.h"
#include "Dice.h"
#include "Turn.h"

using namespace std;

#ifndef GAME
#define GAME

class MyGame {
private:
	Board* board;
	Dice* dice = new Dice();
	Turn* turn = new Turn();
	vector<Player*>players;

	int reward;
	int penalty;
	int nPlayers;
	int maxTurns;
	string gameType;

	int playersTurn;
	bool isGameover;

	void Updated();
	void Close();

	void Move();
	void CheckGameOver();
	void Continue();
	void CheckPlayersTurns();

public:
	MyGame(int _nTiles, int _nSnakes, int _nLadders, int _penalty, int _reward, int _nPlayers, int _maxTurns, string _gameType);
	~MyGame();

	void Start();
};

#endif // !GAME
