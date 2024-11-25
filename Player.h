#ifndef PLAYER_H
#define PLAYER_H

class Player {
private:
  Board *board;
public:
  virtual ~Player() = default;
  //Player(Board *board, char mark);
  virtual void getMove() = 0;
  virtual char getMark() = 0;
  char mark;
  bool skip = false;
  bool swarm = false;
};

// inline Player::Player(Board *board, char mark) {
//   this->board = board;
//   this->mark = mark;
// }

#endif //PLAYER_H
