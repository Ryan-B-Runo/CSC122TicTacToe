#include <iostream>
#include "Board.h"
#include "GameState.h"
#include "Console.h"
#include "HumanPlayer.h"

using namespace std;

int main(){
    Board b;
    GameState g(&b);
    Console c(&b);
    HumanPlayer p1(&b, 'X');
    HumanPlayer p2(&b, '0');
    HumanPlayer current = p1;
    //game here
    return 0;
}