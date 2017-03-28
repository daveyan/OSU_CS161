#include <iostream>
#include "Box.hpp"
using namespace std;

int main()
{
	double boxLength;
	double boxWidth;
	double boxHeight;

	Box cube(boxLength,boxWidth,boxHeight) ;

	cout << "length ";
	cin >> boxLength;
	cout << "width ";
	cin >> boxWidth;
	cout << "height ";
	cin >> boxHeight;

	cout << "The volume of the box is " << cube.getVolume(boxLength,boxWidth, boxHeight) << endl;
	cout << "The surface area of the box is " << cube.getSurface(boxLength, boxWidth, boxHeight) << endl;



	return 0;
}
