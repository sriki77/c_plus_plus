#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

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

#endif /* RECTANGLE_HPP_ */
