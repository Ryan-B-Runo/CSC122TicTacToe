#include <iostream>
#include <limits>
#include "HumanPlayer.h"

using namespace std;

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
    if(this->board->getMark(move) != to_string(move)[0]){
        cout << "Enter a valid input." << endl;
        getMove();
    }else{
        this->board->move(move, this->mark);
    }
}

char HumanPlayer::getMark() {
    return this->mark;
}
