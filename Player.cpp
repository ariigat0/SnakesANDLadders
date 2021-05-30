#include "Player.h"

Player::Player()
{
    name = "gatitou";
    pos = 1;
    prevpos = 1;
}

Player::Player(string name)
{
    this->name = name;
    prevpos=1;
    pos=1;
}

Player::~Player()
{

}

string Player::getName()
{
    return name;
}

int Player::getPos()
{
    return pos;
}

int Player::getPrevpos()
{
    return prevpos;
}

void Player::setPos(int pos)
{
    prevpos = this->pos;
    this->pos=pos;

    if(this->pos<=0) 
    {
        this->pos = 1;
    }
}
