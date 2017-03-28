#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
	private:
		Point ptOne;
		Point ptTwo;
	public:
//		LineSegment();
		LineSegment(Point, Point);
		void setEnd1(double, double);
		void setEnd2(double, double);
		Point getEnd1();
		Point getEnd2();
		double length();
		double slope();
};
#endif

