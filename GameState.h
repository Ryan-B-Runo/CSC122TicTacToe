#ifndef CSC122TICTACTOE_GAMESTATE_H
#define CSC122TICTACTOE_GAMESTATE_H


#include "Board.h"

class GameState {
private:
    Board *board;
    string winner;
    int combos[8][3]{};
public:
    explicit GameState(Board *board);
    string currentState();
};


#endif //CSC122TICTACTOE_GAMESTATE_H
