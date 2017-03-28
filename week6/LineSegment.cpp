#include "LineSegment.hpp"
#include  <iostream>
//LineSegment::LineSegment();
//{
//	ptOne(0,0);
//	ptTwo(0,0);
//}
LineSegment::LineSegment(Point p1, Point p2)
{
	ptOne = p1;
	ptTwo = p2;
}

void LineSegment::setEnd1(double xCoord, double yCoord)
{
	xCoord = ptOne.getXCoord();
	yCoord = ptOne.getYCoord();
}

void LineSegment::setEnd2(double xCoord, double yCoord)
{
	xCoord = ptTwo.getXCoord();
	yCoord = ptTwo.getYCoord();
}
Point LineSegment::getEnd1()
{
	double xCoord, yCoord;
	xCoord = ptOne.getXCoord();
	yCoord = ptOne.getYCoord();
	return ptOne;
}

Point LineSegment::getEnd2()
{
	double xCoord, yCoord;
	xCoord = ptTwo.getXCoord();
	yCoord = ptTwo.getYCoord();
	return ptTwo;
}


double LineSegment::length()
{


	return ptOne.distanceTo(ptTwo);
}

double LineSegment::slope()
{
	double pt1x, pt2x, pt1y, pt2y;
	double slopeRise, slopeRun;
	double lineSlope;

	pt1x = ptOne.getXCoord();
	std::cout << pt1x <<std::endl;
	pt1y = ptOne.getYCoord();
	std::cout << pt1y << std::endl;
	pt2x = ptTwo.getXCoord();
	std::cout << pt2x << std::endl;
	pt2y = ptTwo.getYCoord();
	std::cout << pt2y << std::endl;

	slopeRise = (pt2y - pt1y);
	slopeRun = (pt2x - pt1x);	
	lineSlope = (slopeRise / slopeRun);
	return lineSlope;
}


