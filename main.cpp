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

    int option;
    cout << "Choose an option:\n1: Regular TTT\n2: Battle TTT" << endl;
    cin >> option;
    if (option == 1) {
        HumanPlayer p1(&b, 'X');
        HumanPlayer p2(&b, 'O');
        HumanPlayer current = p1;
        Game game(&c, &g, &p1, &p2, &current);
        game.start();
    }else if (option == 2) {
        Pyromancer p1(&b, 'X');
        Pyromancer p2(&b, 'O');
        Swarm s1(&b, 'x');
        Swarm s2(&b, 'o');

        int p1A;
        int p2A;

        cout << "Choose archetype for Player 1 (X):\n1: Pyromancer - Have the ability to clear the board\n2: Swarm - Have the ability to win in four corners" << endl;
        cin >> p1A;
        cout << "Choose archetype for Player 2 (O):\n1: Pyromancer\n2: Swarm" << endl;
        cin >> p2A;

        if (p1A == 1 && p2A == 1) {
            Game game(&c, &g, &p1, &p2, &p1);
            game.start();
        }else if (p1A == 2 && p2A == 2) {
            Game game(&c, &g, &s1, &s2, &s1);
            game.start();
        }else if (p1A == 2 && p2A == 1) {
            Game game(&c, &g, &s1, &p2, &s1);
            game.start();
        }else if (p1A == 1 && p2A == 2) {
            Game game(&c, &g, &p1, &s2, &p1);
            game.start();
        }
    }else{
        main();
    }
    return 0;
}