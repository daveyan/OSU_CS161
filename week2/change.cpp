/*************************************
 * Author: David Yan
 * Date: 10/6/15
 * Description: Calculating change using the fewest number of coins
 * **************************************/

#include<iostream>
using namespace std;

int main()
{
	int  initialAmt, wholeQ, remainderQ, wholeD, remainderD, wholeN, remainderN; 

	cout << "Please enter an amount in cents less than a dollar.\n";
	cin >> initialAmt;
	
	wholeQ = initialAmt / 25;	// number of quarters - to be displayed
	remainderQ = initialAmt % 25;	// remainder - to be used to calculate dime
	wholeD = remainderQ / 10;	// numder of dimes - to be displayed
	remainderD = remainderQ % 10;	// remainder - to be used to calculate nickel
	wholeN = remainderD / 5;	// number of nickels - to be displayed
	remainderN = remainderD % 5;	// remainder - number of pennies - to be displayed

	cout << "Your change will be:\n";
	cout << "Q: " << wholeQ << endl;
	cout << "D: " << wholeD << endl;
	cout << "N: " << wholeN << endl;
	cout << "P: " << remainderN << endl;	

 	return 0;

}
	
	 
