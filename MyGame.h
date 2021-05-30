#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Board.h"
#include "Dice.h"
#include "Player.h"

using namespace std;

#ifndef MYGAME
#define MYGAME
#define MAX_TURN 30
#define PLAYERS 2
#define REWARD 3
#define PENALTY 3

class MyGame
{
    private:
        Board* board = new Board();
        Dice* dice = new Dice();
        Player* players[PLAYERS];

        int playersTurn = 0; //turno actual del jugador
        bool gameOver = false;
        int counter = 1; //ronda actual

        void Move();
        void CheckGameOver();
        void Update();
        void Close();
        void Continue();
        void CheckPlayersTurn();

    public:
        MyGame();
        ~MyGame();
        void Start();  
};

#endif //MYGAME
