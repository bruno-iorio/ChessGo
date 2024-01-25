#ifndef DISPLAY_H
#define DISPLAY_H

#include<iostream>
#include<vector>
#include<array>
#include "board.h"


class board;


enum PieceType{ //Piece types
nothing = 0,
pawn,
rock,
bishop,
knight,
queen,
king
};


enum PieceColor{ //Piece colors
nocolor = 0;
w,
b
};


class pieces{
public:
pieces(PieceType,PieceColor,int, int);
~pieces(){};

//standart functions:
int get_xposition() const;
int get_yposition() const;
PieceColor get_color() const;
PieceType get_type() const;
std::vector<std::array<int,2>> get_availableMoves();

//board functions:
void update_available();
void set_position(int x, int y);

private:
PieceType type;
PieceColor color;
int x_pos;
int y_pos;
std::vector<std::array<int,2>> available_moves;

};

#endif //DISPLAY_H
