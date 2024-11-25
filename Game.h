#ifndef CSC122TICTACTOE_GAME_H
#define CSC122TICTACTOE_GAME_H

#include "Console.h"
#include "GameState.h"
#include "HumanPlayer.h"

class Game {
private:
    Console *console;
    GameState *gs;
    Player *p1;
    Player *p2;
    Player *current;
public:
    Game(Console *console, GameState *gs, Player *p1, Player *p2, Player *current);
    void start();
    bool restart;
};

#endif //CSC122TICTACTOE_GAME_H
