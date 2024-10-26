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
//    std::cout << "All of the tests have passed!" << std::endl;
//}