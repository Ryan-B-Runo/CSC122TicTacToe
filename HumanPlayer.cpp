#include <iostream>
#include "HumanPlayer.h"

HumanPlayer::HumanPlayer(Board *board, char mark) {
    this->board = board;
    this->mark = mark;
}

void HumanPlayer::getMove() {
    //validate later
    int move;
    cout << "Enter move: ";
    cin >> move;
    cout << endl;
    this->board->move(move, this->mark);
}
