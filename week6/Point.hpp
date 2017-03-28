#ifndef POINT_HPP
#define POINT_HPP

class Point
{
	private:
		double xCoord;
		double yCoord;
	public:
		Point();
		Point(double xValue , double yValue);
		void setXCoord(double);
		void setYCoord(double);
		double getXCoord();
		double getYCoord();
		double distanceTo(const Point&);
};

#endif
