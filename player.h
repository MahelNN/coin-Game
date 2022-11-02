#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
    string name;
    string coinOption;

public:
    string optionValue[2] = {"Heads", "Tails"};
    Player(string name);

    string getCoinOption();
    void setCoinOption(string opponentFlip);
    string getRandCoinOption();

    void didPlayerWin(string winningFlip);
};

#endif // PLAYER_H
