#pragma once
#include<iostream>
class Point {
	double x;
	double y;
public:
	Point(){}
	Point(double xVal, double yVal) :x(xVal), y(yVal) {}
	friend class BasicNode;
	Point& operator =(const Point& p);
};