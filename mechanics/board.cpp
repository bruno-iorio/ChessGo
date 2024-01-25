#include "board.h"

board::board(){}
board::~board(){}
void board::insert_pieces(PieceType t, PieceColor c,int x,int y){

pieces p = Pieces(t,c,x,y);
game[x][y] = p;
}
void board::move_pieces(int old_x, int old_y, int old_x, int old_y){

p = game[old_x][old_y];
game[new_x][new_y] = p;
game[old_x][old_y] = pieces(nothing,nocolor,old_x, old,y);

}





