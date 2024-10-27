#include <iostream>
#include <cassert>

#include "board.h"
#include "console.h"

//int main()
//{
//    Board board;
//    Console console(&board);
//
//    assert(console.display() == "1 | 2 | 3\n-----------\n4 | 5 | 6\n-----------\n7 | 8 | 9\n");
//
//    board.move(1, 'X');
//
//    assert(console.display() == "X | 2 | 3\n-----------\n4 | 5 | 6\n-----------\n7 | 8 | 9\n");
//
//    board.move(2, 'O');
//
//    assert(console.display() == "X | O | 3\n-----------\n4 | 5 | 6\n-----------\n7 | 8 | 9\n");
//
//    board.move(3, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\n4 | 5 | 6\n-----------\n7 | 8 | 9\n");
//
//    // I would write nine tests that mark each of the nine cells
//
//    board.move(4, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | 5 | 6\n-----------\n7 | 8 | 9\n");
//
//    board.move(5, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | W | 6\n-----------\n7 | 8 | 9\n");
//
//    board.move(6, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | W | W\n-----------\n7 | 8 | 9\n");
//
//    board.move(7, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | W | W\n-----------\nW | 8 | 9\n");
//
//    board.move(8, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | W | W\n-----------\nW | W | 9\n");
//
//    board.move(9, 'W');
//
//    assert(console.display() == "X | O | W\n-----------\nW | W | W\n-----------\nW | W | W\n");
//
//    std::cout << "All of the tests have passed!" << std::endl;
//}