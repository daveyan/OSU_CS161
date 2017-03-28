/****************************************
 *Author: David Yan
 *Date: 10/21/15 
 *Description: Calculates the distance fallen based on the give time and returns the value back to the main
 * ******************************/

#include <iostream>
#include <cmath>
using namespace std;

double fallDistance(double time)
{
double fallDist;
const double GRAVITY_G =9.8;	
		
	fallDist = (.5 * GRAVITY_G * pow(time, 2.0));
return fallDist;
}	
