#include "Point.hpp"
#include <cmath> //We will need to use both pow and sqrt in the function "distanceTo"
#include <iostream>
Point::Point() //default constructor. initializing the values as 0
{
	xCoord = 0;
	yCoord = 0;
}

Point::Point(double userX, double userY) //construtor should the user want to pass two data points immediately without user input
{
	xCoord = userX;
	yCoord = userY;
}

void Point::setXCoord(double givenX)
{
	xCoord = givenX;
}

void Point::setYCoord(double givenY)
{
	yCoord = givenY;
}

double Point::getXCoord() 
{
	return xCoord;
}

double Point::getYCoord() 
{
	return yCoord;
}

/**********************************************************
 *Uses accessor functions to grab the x,y coordinates for two "points."
 *With the corresponding x,y values, this function will calculate the length of the side of a 
 *triangle. The distance or "hypotenuse" will be returned after applying the pythagorean theorem
 * *******************************************************/
double Point::distanceTo (const Point &pt)

{
	Point p1;
	double distance; //distance between two points. hypotenuse
	double pointOneX, pointOneY, pointTwoX, pointTwoY;
	double sideOne, sideTwo; // absolute distance between two points. Sides of a triangle

	pointOneX = getXCoord();
	std::cout << "distance to X1 "  <<pointOneX << std::endl;
	pointOneY = getYCoord();
	std::cout << "distance to Y1 " << pointOneY << std::endl;
	pointTwoX = p1.getXCoord();
	std::cout << "distance to X2 " << pointTwoX << std::endl;
	pointTwoY = p1.getYCoord();
	std::cout << "distance to Y2 " << pointTwoY << std::endl;

	sideOne =std::abs(pointTwoX - pointOneX);
	sideTwo =std::abs(pointTwoY - pointTwoX);

	distance = sqrt(pow(sideOne,2) + pow(sideTwo,2));


return distance;
}
		

