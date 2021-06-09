#include "MyGame.h"

MyGame::MyGame(int _nTiles, int _nSnakes, int _nLadders, int _penalty, int _reward, int _nPlayers, int _maxTurns, string _gameType) {
	board = new Board(_nTiles, _nSnakes, _nLadders);
	
	reward = _reward;
	penalty = _penalty;
	nPlayers = _nPlayers;
	maxTurns = _maxTurns;
	gameType = _gameType;

	playersTurn = 0;
	isGameover = false;

	for (int i = 0; i < nPlayers; i++) {
		string name;
		cout << "PLAYER " + to_string(i+1) + ":" ;
		cin >> name;
		players.push_back(new Player(name));
	}
}

MyGame::~MyGame() { }

void MyGame::Start() {
	Updated();
	Close();
}

void MyGame::Updated() {
	if (gameType == "A") {
		cout << "The simulation will run automatically" << endl;
		while (!isGameover && turn->getTotalTurns() <= maxTurns) {
			cout << "There are only #" + to_string(maxTurns) + " turns" << endl;
			cout << turn;
			cout << "Is the turn of Player #" + to_string(playersTurn+1) + " " + players[playersTurn]->getName() << endl;
			Move();
			board->setPlayer(players[playersTurn]->getPrevPos() - 1, players[playersTurn]->getPos() - 1, to_string(playersTurn + 1));
			board->toString();
			CheckGameOver();
			CheckPlayersTurns();
		}
	}
	else {
		cout << "The simulation will run manually " << endl;
		while (!isGameover) {
			cout << turn;
			cout << "Is the turn of Player #" + to_string(playersTurn + 1) + " " + players[playersTurn]->getName() << endl;
			Move();
			board->setPlayer(players[playersTurn]->getPrevPos() - 1, players[playersTurn]->getPos() - 1, to_string(playersTurn + 1));
			board->toString();
			CheckGameOver();
			CheckPlayersTurns();
			system("CLS");
		}
	}
}

void MyGame::Close() {
	cout << "-- G A M E  O V E R --" << endl;
	if (turn->getTotalTurns() >= maxTurns && gameType == "A")
		cout << "The  maximum  number  of  turns has  been reached... :0" << endl;
	else 
		cout << players[playersTurn]->getName() + " is the winner!" << endl;
	system("PAUSE");
}

void MyGame::Move() {
	int tempMove = dice->getRoll();
	cout << "Player actual tile: " +  to_string(players[playersTurn]->getPos()) << endl;
	cout << "Dice: " + to_string(tempMove) << endl;
	int tempPosPlayer = players[playersTurn]->getPos();
	int tmp = tempPosPlayer;
	tempPosPlayer += tempMove;
	string tile = "";

	if (tempPosPlayer >= board->getNumberTiles()) {
		tempPosPlayer = board->getNumberTiles();
	}
	else {
		if (board->getTile(tempPosPlayer) == "S") 
		{
			tile = "S";
			tempPosPlayer -= penalty;
			cout << "You found a snake! :( you return " + to_string(penalty) + " tiles" << endl;
		}
		else if (board->getTile(tempPosPlayer) == "L") {
			tile = "L";
			tempPosPlayer += reward;
			cout << "WUUUUU You found a ladder, you GO UP! :D " + to_string(reward) + " tiles" << endl;
		}
		else
		{
			tile = "N";
		}
	}
	players[playersTurn]->setPos(tempPosPlayer); 
	cout << "Player new tile: " + to_string(players[playersTurn]->getPos()) << endl;
    cout << to_string(playersTurn) + " " + to_string(playersTurn+1) + " " + 
        to_string(tmp) + " " + to_string(tempMove) + " " + tile + " " + to_string(tempPosPlayer) << endl;
}

void MyGame::CheckGameOver() {
	if (players[playersTurn]->getPos() >= board->getNumberTiles())
		isGameover = true;
	else
		Continue();
}

void MyGame::Continue() {

	if(gameType == "A")
	{
		return;
	}
	else
	{
		string temp;
		do {
			cout << "Press C to continue next turn or E to end the game: " << endl;
			cin >> temp;
			if (temp == "E")
				exit(0);
		} while (temp != "C");
	}

}

void MyGame::CheckPlayersTurns() 
{
	turn->AddTurn();
	if (players[playersTurn]->getPos() < board->getNumberTiles())
	{
		if (playersTurn >= nPlayers - 1)
			playersTurn = 0;
		else
			playersTurn++;
	}
}
