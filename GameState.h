#ifndef CSC122TICTACTOE_GAMESTATE_H
#define CSC122TICTACTOE_GAMESTATE_H

#include "Board.h"
#include <string>

using namespace std;

class GameState {
private:
    Board *board;
    string winner;
    int combos[9][4];
    int gamesPlayed;
    int p1Wins = 0;
    int p2Wins = 0;
    int ties = 0;
public:
    explicit GameState(Board *board);
    string currentState();
    int getP1Wins();
    int getP2Wins();
    int getTies();
    int getGamesPlayed();
};


#endif //CSC122TICTACTOE_GAMESTATE_H
