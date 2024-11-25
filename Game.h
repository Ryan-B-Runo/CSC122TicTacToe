#ifndef CSC122TICTACTOE_GAME_H
#define CSC122TICTACTOE_GAME_H

#include "Console.h"
#include "GameState.h"
#include "HumanPlayer.h"
#include "Pyromancer.h"
#include "Swarm.h"

class Game {
private:
    Console *console;
    GameState *gs;
    Player *p1;
    Player *p2;
    Player *current;
    Board *board;
public:
    Game(Board *board, Console *console, GameState *gs);
    void start();
    bool restart;
    HumanPlayer h1;
    HumanPlayer h2;

    Pyromancer py1;
    Pyromancer py2;

    Swarm s1;
    Swarm s2;
};

#endif //CSC122TICTACTOE_GAME_H
