#include "display.h"

pieces::pieces(PieceType type, PieceColor color, int x, int y){

this->type = type;
this->color = color;
this->x_pos = x;
this->y_pos = y;

}

int pieces::get_xposition(){return x_pos;}
int pieces::get_yposition(){return y_pos;}
PieceColor pieces::get_color(){return color;}
PieceType pieces::get_type(){return type;}
std::vector<std::array<int,2>> pieces::get_availableMoves(){return available_moves;}

void update_available(){

std::vector<std::array<int,2>> available;
switch(this->type){

case nothing:
	break;
case pawn:
	if (color == w){
	std::array<int,2> a;
	a[0] = x_pos;
	a[1] = y_pos+1;
	available.push_back(a);
	}
	else if(color == b){
	std::array<int,2> a;
	a[0] = x_pos;
	a[1] = y_pos-1;
	available.push_back(a);
	}
	break;
case rock:
	



	break;



}


}

void pieces::set_position(int x, int y){

x_pos = x;
y_pos = y;

}



