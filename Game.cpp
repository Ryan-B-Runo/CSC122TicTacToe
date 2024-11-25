#include <iostream>
#include "Game.h"

#include "Pyromancer.h"
#include "Swarm.h"

Game::Game(Board *board, Console *console, GameState *gs) : console(console), gs(gs), h1(HumanPlayer(board, 'X')), h2(HumanPlayer(board, 'O')), py1(Pyromancer(board, 'X')), py2(Pyromancer(board, 'O')), s1(Swarm(board, 'x')),
                                                            s2(Swarm(board, 'o')) {
    this->restart = true;
}

void Game::start() {
    char playAgain = 'y';

    int option;
    cout << "Choose an option:\n1: Regular TTT\n2: Battle TTT" << endl;
    cin >> option;
    if (option == 1) {
        p1 = &h1;
        p2 = &h2;
    }else if (option == 2) {
        int p1A;
        int p2A;

        cout << "Choose archetype for Player 1 (X):\n1: Pyromancer - Have the ability to clear the board\n2: Swarm - Have the ability to win in four corners" << endl;
        cin >> p1A;
        cout << "Choose archetype for Player 2 (O):\n1: Pyromancer\n2: Swarm" << endl;
        cin >> p2A;

        if (p1A == 1 && p2A == 1) {
            p1 = &py1;
            p2 = &py2;
        }else if (p1A == 2 && p2A == 2) {
            p1 = &s1;
            p2 = &s2;
        }else if (p1A == 2 && p2A == 1) {
            p1 = &s1;
            p2 = &py2;
        }else if (p1A == 1 && p2A == 2) {
            p1 = &py1;
            p2 = &s2;
        }else {
            start();
        }
    }else {
        start();
    }
    current = p1;
    cout << "Welcome to Tic-Tac-Toe.\nX starts:" << endl;

    while(gs->currentState() == "In Progress."){
       cout << console->display() << endl;
       current->getMove();
       if(!current->skip){
           if(current->getMark() == 'X' || current->getMark() == 'x'){
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
