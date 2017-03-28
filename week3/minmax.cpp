/********************************
 * Author: David Yan
 * Date: 10/9/15
 * Description - Displays the mix and max integer from a given list
 * *********************************/

#include<iostream>
using namespace std;

int main()
{
	int	numOfInt,
		loopNum;
	double	givenNum,
		minNum,
		maxNum;		

	cout << "How many integers would you like to enter?\n";
	cin >> numOfInt;

	
	cout << "Please enter " << numOfInt <<" integers.\n";

	for (loopNum=1; loopNum <=numOfInt ; loopNum++)
	{
	cin >> givenNum; 
//	cout <<"loop number" << loopNum << endl;	 
	
	if(loopNum== 1)
	{
	minNum = givenNum;
	maxNum = givenNum;
	}
	else if(loopNum>1)	
	{
		if( givenNum >= maxNum){ maxNum=givenNum;}

		if(givenNum <= minNum) {minNum=givenNum;}	 	
	}
	
				
	} 
 	

		cout <<"min: " << minNum << endl;
		cout <<"max: " << maxNum << endl;	


return 0;

}



