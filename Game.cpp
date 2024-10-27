#include <iostream>
#include "Game.h"

Game::Game(Console *console, GameState *gs, HumanPlayer *p1, HumanPlayer *p2, HumanPlayer *current) : console(console), gs(gs), p1(p1), p2(p2), current(current) {this->restart = true;}

void Game::start() {
    char playAgain = 'y';
    cout << "Welcome to Tic-Tac-Toe.\nX starts:" << endl;
    while(gs->currentState() == "In Progress."){
       cout << console->display() << endl;
       current->getMove();
       if(!current->skip){
           if(current->mark == 'X'){
               current = p2;
           }else{
               current = p1;
           }
       }else{
           current->skip = false;
       }
    }
    cout << "Would you like to play again? (Y/N)";
    cin >> playAgain;
    if(tolower(playAgain) == 'y'){
        start();
    }
}