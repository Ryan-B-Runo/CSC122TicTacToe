#include <iostream>

#include "Board.h"
#include "GameState.h"
#include "Console.h"
#include "HumanPlayer.h"
#include "Game.h"
#include "Pyromancer.h"
#include "Swarm.h"

using namespace std;

int main(){
    Board b;
    GameState g(&b);
    Console c(&b);

    Game game(&b, &c, &g);
    game.start();

    return 0;
}