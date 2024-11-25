
#include "Pyromancer.h"

#include <iostream>
#include <limits>
using namespace std;

Pyromancer::Pyromancer(Board *board, char mark){
  this->board = board;
  this->mark = mark;
}

char Pyromancer::getMark(){
  return this->mark;
}

void Pyromancer::getMove() {
  int option;
  cout << "Options:\n1: Enter cell\n2: Clear the board" << endl;
  cin >> option;
  if (option == 1) {
    int move;
      cout << "Enter move:" << endl;
      cin >> move;
      while (cin.fail()) {
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
  }else if (option == 2) {
    if (this->abilityUsed == false) {
      board->clear();
      this->abilityUsed = true;
    }else {
      cout << "This ability has already been used" << endl;
      this->skip = true;
      getMove();
    }
  }
}
