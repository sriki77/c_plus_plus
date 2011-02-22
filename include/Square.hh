#pragma once
#include "Rectangle.hh"

class Square: public Rectangle {
public:
	Square(int sideLength) : Rectangle(sideLength, sideLength) {}
	virtual ~Square() {}

private:
	Square(int, int);
};
