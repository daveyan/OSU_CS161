/*************************************
*Author: David Yan
*Date: 10/27/15
*Description: The header file to the class "Box"
***********************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box
{
private:
	int length;
	int width;
	int height;
public:
	bool setLength;
	bool setWidth;
	bool setHeight;

	double getLength();
	double getWidth();
	double getHeight();

	double getVolume(double, double, double);
	double getSurface(double, double, double);

	Box();
	Box(double, double, double);

};

#endif
