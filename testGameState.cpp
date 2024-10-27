//#include <cassert>
//#include "Board.h"
//#include "GameState.h"
//#include<iostream>
//using namespace std;
//int main(){
//    Board b;
//    GameState g(&b);
//
//    b.move(1, 'w');
//    b.move(2, 'w');
//    b.move(3, 'w');
//    assert(g.currentState() == "w wins.");
//    b.move(1, '1');
//    b.move(2, '2');
//    b.move(3, '3');
//
//    b.move(4, 'r');
//    b.move(5,'r');
//    b.move(6, 'r');
//    assert(g.currentState() == "r wins.");
//    b.move(4, '4');
//    b.move(5, '5');
//    b.move(6, '6');
//
//    b.move(7, 't');
//    b.move(8,'t');
//    b.move(9, 't');
//    assert(g.currentState() == "t wins.");
//    b.move(7, '7');
//    b.move(8, '8');
//    b.move(9, '9');
//
//    b.move(1, 'c');
//    b.move(4,'c');
//    b.move(7, 'c');
//    assert(g.currentState() == "c wins.");
//    b.move(1, '1');
//    b.move(4, '4');
//    b.move(7, '7');
//
//    b.move(2, '!');
//    b.move(5,'!');
//    b.move(8, '!');
//    assert(g.currentState() == "! wins.");
//    b.move(2, '2');
//    b.move(5, '5');
//    b.move(8, '8');
//
//    b.move(3, 'q');
//    b.move(6,'q');
//    b.move(9, 'q');
//    assert(g.currentState() == "q wins.");
//    b.move(3, '3');
//    b.move(6, '6');
//    b.move(9, '9');
//
//    b.move(1, ' ');
//    b.move(5,' ');
//    b.move(9, ' ');
//    assert(g.currentState() == "  wins.");
//    b.move(1, '1');
//    b.move(5, '5');
//    b.move(9, '9');
//
//    b.move(3, 'f');
//    b.move(5,'f');
//    b.move(7, 'f');
//    assert(g.currentState() == "f wins.");
//    b.move(3, '3');
//    b.move(5, '5');
//    b.move(7, '7');
//
//    b.move(4, 'r');
//    b.move(5,'f');
//    b.move(6, 'r');
//    assert(g.currentState() == "In Progress.");
//    b.move(4, '4');
//    b.move(5, '5');
//    b.move(6, '6');
//
//    b.move(1, 'x');
//    b.move(2,'o');
//    b.move(3, 'x');
//    b.move(4, 'o');
//    b.move(5,'x');
//    b.move(6, 'o');
//    b.move(7, 'o');
//    b.move(8,'x');
//    b.move(9, 'o');
//    assert(g.currentState() == "Draw.");
//
//    cout << "All tests passed." << endl;
//
//    return 0;
//}