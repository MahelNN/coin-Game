#ifndef COINGAME_H
#define COINGAME_H

#include <string>
#include "coin.h"
#include "player.h"

using namespace std;


class CoinGame
{
public:
    Player * players[2];
    Coin * theCoin = new Coin;
    CoinGame(string nameP1, string nameP2);
    ~CoinGame();

    void startGame();

};

#endif // COINGAME_H
