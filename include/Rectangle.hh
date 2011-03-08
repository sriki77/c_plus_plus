#pragma once

class Rectangle {

public:
	Rectangle(int length, int breadth);
	int area();
	int perimeter();
	static Rectangle* createSquare(int side);

private:
	int _length;
	int _breadth;
};
