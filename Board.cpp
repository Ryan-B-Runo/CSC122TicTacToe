#include "Board.h"
#include <iostream>
using namespace std;
void Board::clear() {
    this->moves[0] = '1';
    this->moves[0] = '2';
    this->moves[0] = '3';
    this->moves[0] = '4';
    this->moves[0] = '5';
    this->moves[0] = '6';
    this->moves[0] = '7';
    this->moves[0] = '8';
    this->moves[0] = '9';
}

void Board::move(int i, char m) {
    if(i > 0 && i < 10){
        this->moves[i-1] = m;
    }
}

char Board::getMark(int i) {
    return this->moves.at(i-1);
}