#include <stdlib.h>

#include "coingame.h"

using namespace std;

CoinGame::CoinGame(string nameP1, string nameP2)
{
    players[0] = new Player(nameP1);
    players[1] = new Player(nameP2);
}

CoinGame::~CoinGame()
{
    for(auto& p : players) delete p;
    delete theCoin;
}

void CoinGame::startGame()
{
    srand(time(0));
    //  A player at random
    int playerIndex = (rand() % 100 < 50) ? 0 : 1;
    // offers a prediction of a coin flip.
    string playersPick = players[playerIndex]->getRandCoinOption();
    // The other player gets the other option.
    int otherIndex = !playerIndex;
    players[otherIndex]->setCoinOption(playersPick);
    // The coin is flipped.
    string winningFlip = theCoin->getCoinOption();
    // The correct guess wins.
    for(auto& p : players) p->didPlayerWin(winningFlip);
}
