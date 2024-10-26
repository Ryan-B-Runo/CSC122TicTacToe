#ifndef CSC122TICTACTOE_HUMANPLAYER_H
#define CSC122TICTACTOE_HUMANPLAYER_H

#include "Board.h"

class HumanPlayer {
private:
    Board *board;
public:
    HumanPlayer(Board *board, char mark);
    void getMove();
    char mark;
    bool skip;
};

#endif //CSC122TICTACTOE_HUMANPLAYER_H
