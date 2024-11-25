#ifndef CSC122TICTACTOE_HUMANPLAYER_H
#define CSC122TICTACTOE_HUMANPLAYER_H

#include "Board.h"
#include "Player.h"

class HumanPlayer : public Player {
private:
    Board *board;

public:
    HumanPlayer(Board *board, char mark);
    void getMove() override;
    char getMark() override;
    char mark;
    bool skip = false;
};

#endif //CSC122TICTACTOE_HUMANPLAYER_H
