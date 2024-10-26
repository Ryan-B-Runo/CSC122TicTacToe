#include <iostream>
#include "Game.h"

Game::Game(Console *console, GameState *gs, HumanPlayer *p1, HumanPlayer *p2, HumanPlayer *current) : console(console), gs(gs), p1(p1), p2(p2), current(current) {}

void Game::start() {
    while(gs->currentState() == "In Progress."){
       cout << console->display() << endl;
       current->getMove();
       if(current->mark == 'X'){
           current = p2;
       }else{
           current = p1;
       }
    }
}