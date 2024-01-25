#ifndef BOARD_H
#define BOARD_H

#include <iostream>
#include "display.h"


class board{

public:
board();
~board();
void insert_piece(PieceType, PieceColor, int , int);
void move_piece(int old_x,int old_y,int new_x,int new_y);



private
pieces game[8][8];
bool whiteCastleAvailable{true};
bool blackCastleAvailable{true};



};



#endif //BOARD_H
