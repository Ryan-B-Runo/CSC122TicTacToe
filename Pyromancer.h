#ifndef PYROMANCER_H
#define PYROMANCER_H

#include "Board.h"
#include "player.h"
//#include "WinningCombos.h"

class Pyromancer : public Player {
private:
  Board *board;

public:
    Pyromancer(Board *board, char mark);
    void getMove() override;
    char getMark() override;
    char mark;
    bool skip = false;
    bool abilityUsed = false;
    void setMark(char mark);
};

#endif //PYROMANCER_H
