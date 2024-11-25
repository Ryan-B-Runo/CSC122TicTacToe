#include "Swarm.h"

#include <iostream>
#include <limits>

using namespace std;

Swarm::Swarm(Board *board, char mark){
  this->board = board;
  this->mark = mark;
}

char Swarm::getMark(){
  return mark;
}
void Swarm::getMove(){
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