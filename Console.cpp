#include "Console.h"

using namespace std;

Console::Console(Board *board) {
    this->board = board;
}

string Console::display() {
    string res;
    res += board->getMark(1);
    res += " | ";
    res += board->getMark(2);
    res += " | ";
    res += board->getMark(3);
    res += "\n";
    res += "-----------\n";
    res += board->getMark(4);
    res += " | ";
    res += board->getMark(5);
    res += " | ";
    res += board->getMark(6);
    res += "\n";
    res += "-----------\n";
    res += board->getMark(7);
    res += " | ";
    res += board->getMark(8);
    res += " | ";
    res += board->getMark(9) ;
    res += "\n";
    return res;
}