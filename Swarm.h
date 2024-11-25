#ifndef SWARM_H
#define SWARM_H

#include "Board.h"
#include "Player.h"

class Swarm : public Player{
private:
  Board *board;
  bool swarm = true;
public:
  Swarm(Board *board, char mark);
  void getMove() override;
  char getMark() override;
  char mark;
  bool skip = false;
};

#endif //SWARM_H
