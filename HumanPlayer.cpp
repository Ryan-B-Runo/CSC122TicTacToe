#include <iostream>
#include <limits>
#include "HumanPlayer.h"
HumanPlayer::HumanPlayer(Board *board, char mark) {
    this->board = board;
    this->mark = mark;
    this->skip = false;
}

void HumanPlayer::getMove() {
    int move;
    cout << "Enter move: ";
    cin >> move;
    while(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter a valid input." << endl;
        this->skip = true;
    }
    cout << endl;
    this->board->move(move, this->mark);
}
