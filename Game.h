#ifndef CSC122TICTACTOE_GAME_H
#define CSC122TICTACTOE_GAME_H

#include "Console.h"
#include "GameState.h"
#include "HumanPlayer.h"

class Game {
private:
    Console *console;
    GameState *gs;
    HumanPlayer *p1;
    HumanPlayer *p2;
    HumanPlayer *current;
public:
    Game(Console *console, GameState *gs, HumanPlayer *p1, HumanPlayer *p2, HumanPlayer *current);
    void start();
    bool restart;
};

#endif //CSC122TICTACTOE_GAME_H
