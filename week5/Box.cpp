/*********************
 *Author: David Yan
 *Date 10/27/15
 *Description: implementation file for the class "Box"
 *********************/

#include "Box.hpp"

/**************default constructor***************/
Box::Box(){}

/*************constructor to initialize if needed**********/
Box::Box(double length, double width, double height)
{
	length = 1;
	width = 1;
	height = 1;

}
/***************************************
 * Accessor to get the length
 * *************************************/
double Box::getLength()
{
	return length;
}

/****************************************
 * Accessor to get the width
 * ***************************************/
double Box::getWidth()
{
	return width;
}
/****************************************
 * Accessor to get the height
 * *************************************/
double Box::getHeight()
{
	return height;
}
/***************************************
 *calculate the volume of the box
 * ************************************/
double Box::getVolume(double length, double width, double height) 
{
	return (length *width * height);
}
/***************************************
 * calculate the surface area of the box
 * ************************************/
double Box::getSurface(double length, double width, double height)
{
	return (2 * (length*width) + 2 * (length*height) + 2 * (width*height));
}
