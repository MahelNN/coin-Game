#include <stdlib.h>
#include <iostream>

#include "player.h"

using namespace std;

Player::Player(string name) : name(name)
{

}

string Player::getCoinOption()
{
    return "";
}

void Player::setCoinOption(string opponentFlip)
{
    // The player gets the other coin flip option
    coinOption = (opponentFlip == "Heads") ? "Tails" : "Heads";
}

string Player::getRandCoinOption()
{
    //    srand(time(0));
    // The player picked offers a prediction of a coin flip
    int randNum = (rand() % 100 < 50) ? 0 : 1;
    string playersPick = (randNum == 0) ? optionValue[0] : optionValue[1];
    coinOption = playersPick;
    return playersPick;
}

void Player::didPlayerWin(string winningFlip)
{
    // A winner is picked
    if(coinOption == winningFlip){ // if the coinOption corresponds to the winnFlip
        cout << name << " wins with the " << coinOption << " pick" << endl;
    }else{
        cout << name << " loses with the " << coinOption << " pick" << endl;
    }
}
