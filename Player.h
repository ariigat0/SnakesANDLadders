#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef PLAYER
#define PLAYER

class Player
{
    private:
        string name;
        int pos, prevpos;

    public:
        Player();
        Player(string name);
        ~Player();

        //getters
        string getName();
        int getPos();
        int getPrevpos();

        //setters
        void setPos(int pos);
};

#endif //PLAYER
