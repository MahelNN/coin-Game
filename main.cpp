#include "coingame.h"
#include <iostream>

using namespace std;

int main()
{
    string namePlayer1 = "Mahel";
    string namePlayer2 = "Ivan";

    CoinGame coinGame(namePlayer1, namePlayer2);

    string answer{""};

    do{
        // Play the game
        coinGame.startGame();

        // Offers to try again
        cout << "\nWould you like to play again ? (Yes / No)" << endl;
        cin >> answer;
    }while(toupper(answer[0])=='Y');

    return 0;
}
