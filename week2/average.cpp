/****************************
*Author: David Yan
*Date: 10/5/15
*Description - Calculating the average of 5 numbers
***************************/ 
#include <iostream>

using namespace std;
int main()
{

	double numOne, numTwo, numThree, numFour, numFive, totalAvg;
	
	cout << "Please enter 5 numbers.\n";
	cin >> numOne;
	cin >> numTwo;
	cin >> numThree;
	cin >> numFour;
	cin >> numFive;
	
	totalAvg =(numOne + numTwo + numThree + numFour + numFive)/5;
 

	cout << "The average of those numbers is:\n" << totalAvg << endl;

	return 0;
} 
