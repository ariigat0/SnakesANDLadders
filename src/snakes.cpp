#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "MyGame.h"

using namespace std;

int main() {
	srand(time(NULL));
	cout << "-- WELCOME TO MY SNAKES AND LADDERS GAME :) -- " << endl;

	int tiles;
	cout << "Enter the length of tiles: ";
	cin >> tiles;

	int snakes;
	cout << "Enter the length of snakes: ";
	cin >> snakes;

	int ladders;
	cout << "Enter the length of ladders: ";
	cin >> ladders;

	int penalty;
	cout << "Enter the length of penalty: ";
	cin >> penalty;

	int reward;
	cout << "Enter the length of reward: ";
	cin >> reward;

	int players;
	cout << "Enter the number of players: ";
	cin >> players;

	int maxTurns;
	cout << "Enter the length of max turns: ";
	cin >> maxTurns;

	string gameType;
	cout << "Enter A to automatically or M to Manually: ";
	cin >> gameType;

	MyGame* g = new MyGame(tiles, snakes, ladders, penalty, reward, players, maxTurns, gameType); // #Tiles, #Snakes, #Ladders, Penalty, Reward, Players, MaxTurns, GameType
	g->Start();
	cout << "Thanks for playing!!!" << endl;
	return 0;
}

