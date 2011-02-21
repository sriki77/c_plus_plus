#include "Rectangle.hh"

Rectangle::Rectangle(int length,int breadth):_length(length),_breadth(breadth){

}

int Rectangle::area(){
	return _length * _breadth;
}

int Rectangle::perimeter(){
	return _length + _breadth;
}

Rectangle* Rectangle::createSquare(int side){
	Rectangle* square=new Rectangle(side,side);
	return square;
}
