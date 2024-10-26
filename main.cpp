#include "Board.h"
#include "GameState.h"
#include "Console.h"
#include "HumanPlayer.h"
#include "Game.h"

using namespace std;

int main(){
    Board b;
    GameState g(&b);
    Console c(&b);
    HumanPlayer p1(&b, 'X');
    HumanPlayer p2(&b, 'O');
    HumanPlayer current = p1;
    //game here
    Game game(&c, &g, &p1, &p2, &current);
    game.start();
    return 0;
}