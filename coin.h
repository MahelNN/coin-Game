#ifndef COIN_H
#define COIN_H

#include <string>

using namespace std;

class Coin
{
    string coinOption;

public:
    string optionValue[2] = {"Heads", "Tails"};
    Coin();
    string getCoinOption();
};

#endif // COIN_H
