/*************************************
 * Author: David Yan
 * Date: 10/5/15
 * Description: A program that can convert Celcius to Fahrenheit
 ****************************/
#include <iostream>
using namespace std;
int main()
{
	double tempC,tempF;
	cout <<"Please enter a Celsius temperature.\n";
	cin >> tempC;
	
	tempF =((1.8) * tempC + 32);
	cout <<"The eqivalent Fahrenheit temperature is:\n";
	cout << tempF <<endl;


	return 0;
}
     
