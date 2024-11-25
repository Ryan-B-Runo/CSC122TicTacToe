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
public:
    explicit GameState(Board *board);
    string currentState();
};


#endif //CSC122TICTACTOE_GAMESTATE_H
