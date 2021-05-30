#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef TILE
#define TILE

class Tile
{
    private:
        string type;
        int id;

    public:
        Tile();
        Tile(int _id , string _type);
        ~Tile();

        int getId();
        string getType();
        string toString();

        void setId(int id);
        void setType(string type);
};

#endif //TILE