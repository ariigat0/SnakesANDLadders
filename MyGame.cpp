#include "MyGame.h"

MyGame::MyGame()
{
    playersTurn = 0;
    counter = 1;
    gameOver = false;
    for (int i = 0; i < PLAYERS; i++)
    {
        string name;
        cout << "PLAYER " + to_string(i+1) + ": " ;
        getline(cin,name);
        players[i] = new Player(name);
    }
}

MyGame::~MyGame()
{

}

void MyGame::Start()
{
    Update();
    Close();
}

void MyGame::Update()
{
    string snakefile = "snakes.txt";
    ifstream file(snakefile.c_str());
    string line;
    
    while(counter <= MAX_TURN && !gameOver) 
    {
        cout << "Es el turno # " + to_string(counter) << endl;
        cout << "Es el turno de: "  + players[playersTurn]->getName() << endl;
        Move();
        board->setPlayer(players[playersTurn]->getPrevpos(), players[playersTurn]->getPos()-1, to_string(playersTurn+1));
        cout << board->toString() << endl;
        CheckGameOver();
        CheckPlayersTurn();  
    }
}

void MyGame::Close()
{
    cout << "-- G A M E  O V E R --" << endl;
    
    if (counter >= MAX_TURN)
        cout <<"The maximum number of turns has been reached... :O" << endl;
    else 
        cout << "Player " + players[playersTurn]->getName() + " is the winner!!!" << endl;
        cout << "\nThanks for playing!!! \n" << endl; 
}

void MyGame::Move()
{
    int tmproll = dice->getDice();
    cout << "Te salió un: " + to_string(tmproll) << endl;
    int tmpPosPlayer = players[playersTurn]->getPos();
    int tmp=tmpPosPlayer;
    tmpPosPlayer += tmproll;

    string tile = "";

    if (tmpPosPlayer >= TILES)
    {
        tmpPosPlayer = TILES;
    }
    else
    {
        if(board->getTile(tmpPosPlayer) == "S")
        {
            tmpPosPlayer -= PENALTY;
            tile = "S";
            cout << "¡Caiste en una serpiente! :(" << endl;
        }
        else if(board->getTile(tmpPosPlayer) == "L")
        {
            tmpPosPlayer += REWARD;
            tile = "L";
            cout << "¡wuuu subiste una escalera! :D" << endl;
        }
        else
        {
            tile = "N";
        }

    }
    players[playersTurn]->setPos(tmpPosPlayer);
    cout << "Tu posición es:  " + to_string(players[playersTurn]->getPos()) << endl;
    cout << to_string(counter) + " " + to_string(playersTurn+1) + " " + 
        to_string(tmp) + " " + to_string(tmproll) + " " + tile + " " + to_string(tmpPosPlayer) << endl;
}   

void MyGame::CheckGameOver()
{
    if (players[playersTurn]->getPos() >= TILES)
        gameOver = true; 
    else
        Continue();
}

void MyGame::Continue()
{
    string Continue;
    cout << "Press C to continue next turn, or E to end the game: " << endl;
    getline(cin,Continue);

    if(Continue == "C")
    {
        return;
    }
    else if(Continue == "E")
    {
        cout << "Thanks for playing!!!" << endl; 
        exit (0);
    }
    else
    {
        do 
    {
        cout << "Invalid option, please press C to continue next turn or E to end the game: " << endl;
        getline(cin,Continue);

        if (Continue == "E")
        {
            cout << "Thanks for playing!!!" << endl; 
            exit(0);
        }
        
    }   
    while(Continue != "C");

    }
}

void MyGame::CheckPlayersTurn()
{
    counter++;

    if (players[playersTurn]->getPos() < TILES)
    {
        if (playersTurn >= PLAYERS - 1)
            playersTurn = 0;
        else
            playersTurn ++;
    }   
}
