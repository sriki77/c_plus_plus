#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Rectangle.hh"
#include "Square.hh"
#include "GTest.hh"
using namespace std;

#define TEST_CASE rectangletest


GTEST(shouldSupportArea){
	Rectangle rectangle(10,20);
	ASSERT_EQ(200,rectangle.area());
}

GTEST(shouldBeSquareFriendly) {
	Square square(10);
	ASSERT_EQ(100, square.area());
	ASSERT_EQ(40, square.perimeter());
}

GTEST(shouldSupportPerimeter){
	Rectangle rectangle(10, 20);
	ASSERT_EQ(60, rectangle.perimeter());
}

GTEST(shouldBeAbleToCreateASquare){
	Rectangle* test_sq=Rectangle::createSquare(3);
	EXPECT_TRUE(test_sq != NULL);
	EXPECT_EQ(9,test_sq->area());
	delete test_sq;
}
