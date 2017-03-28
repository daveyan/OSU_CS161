#include "LineSegment.hpp"
#include <iostream>

using namespace std;

int main()
{
	Point p1, p2;

	double ug1, ug2, ug3, ug4;
	double slopeF;
	double distF;

	cout << "enter an X value followed by a Y ";
	cin >> ug1 >> ug2;
	p1.setXCoord(ug1);
	p1.setYCoord(ug2);
	cout << "enter another X value followed by a Y ";
	cin >> ug3 >> ug4;
	p2.setXCoord(ug3);
	p2.setYCoord(ug4);

	cout << "coordinate one " << p1.getXCoord()<<"," << p1.getYCoord() << endl;
	cout << "coordinate two " << p2.getXCoord()<<"," << p2.getYCoord() << endl;

	LineSegment ls1(p1,p2);
	
	ls1.setEnd1(ug1,ug2);
	ls1.setEnd2(ug3,ug4);
	
	slopeF = ls1.slope();
	distF = ls1.length();

	cout << "distance between the two points is " << distF << endl;
	cout << "slope of the line is " << slopeF << endl;
	
	

	return 0;
}

