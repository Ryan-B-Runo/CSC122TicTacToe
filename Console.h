#ifndef CSC122TICTACTOE_CONSOLE_H
#define CSC122TICTACTOE_CONSOLE_H

#include "Board.h"
#include <string>

using namespace std;

class Console {
private:
    Board *board;
public:
    Console(Board *board);
    string display();
};

#endif //CSC122TICTACTOE_CONSOLE_H
