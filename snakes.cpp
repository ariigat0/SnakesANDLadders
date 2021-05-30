#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 
#include "MyGame.h"
using namespace std;

int main() 
{
    srand(time(NULL));
    cout << "BIENVENIDOS A SERPIENTES Y ESCALERAS" << endl;
    MyGame* game = new MyGame();
    game->Start();

    return 0;
}

