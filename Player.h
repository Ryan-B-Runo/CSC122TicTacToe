#ifndef PLAYER_H
#define PLAYER_H

class Player {
public:
  virtual ~Player() = default;

  virtual void getMove() = 0;
  virtual char getMark() = 0;
  char mark;
  bool skip = false;
  bool swarm = false;
};

#endif //PLAYER_H
