#ifndef CSC122TICTACTOE_BOARD_H
#define CSC122TICTACTOE_BOARD_H

#include <array>
#include <string>

using namespace std;

class Board {
private:
    array<char, 9> moves = {'1','2','3','4','5','6','7','8','9'};
public:
    void clear();
    void move(int i, char m);
    char getMark(int i);
};


#endif //CSC122TICTACTOE_BOARD_H
