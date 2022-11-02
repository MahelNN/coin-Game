#include <stdlib.h>

#include "coin.h"

Coin::Coin()
{

}

string Coin::getCoinOption()
{
    //    srand(time(0));
    // The coin is flipped
    int randNum = (rand() % 100 < 50) ? 0 : 1;
    // and a result is provided. Either Heads (0) or Tails (1)
    string winningFlip = (randNum == 0) ? optionValue[0] : optionValue[1];

    return winningFlip;
}
