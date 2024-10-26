#include "GameState.h"

GameState::GameState(Board *board) {
    this->board=board;

    this->combos[0][0] = 1;
    this->combos[0][1] = 2;
    this->combos[0][2] = 3;

    this->combos[1][0] = 4;
    this->combos[1][1] = 5;
    this->combos[1][2] = 6;

    this->combos[2][0] = 7;
    this->combos[2][1] = 8;
    this->combos[2][2] = 9;

    this->combos[3][0] = 1;
    this->combos[3][1] = 4;
    this->combos[3][2] = 7;

    this->combos[4][0] = 2;
    this->combos[4][1] = 5;
    this->combos[4][2] = 8;

    this->combos[5][0] = 3;
    this->combos[5][1] = 6;
    this->combos[5][2] = 9;

    this->combos[6][0] = 1;
    this->combos[6][1] = 5;
    this->combos[6][2] = 9;

    this->combos[7][0] = 3;
    this->combos[7][1] = 5;
    this->combos[7][2] = 7;
}

string GameState::currentState() {
    for(int i = 0; i < 8; i++){
        if(this->board->getMark(this->combos[i][0]) == this->board->getMark(this->combos[i][1]) == this->board->getMark(this->combos[i][2])){
            string res;
            res = std::to_string(+ this->board->getMark(this->combos[i][0]));
            res += " wins.";
            return res;
        }
    }
    return "In Progress.";
}
