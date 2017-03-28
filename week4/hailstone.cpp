/************************************************
 *Author: David Yan
 *Date: 10/21/15
 *Description: calculates the hailstone sequence of a given integer   
 * ***********************************************/

#include <iostream>
using namespace std;
/*******************************
 *Hailstone Math
 *Ddoes the calculations to find the next number in the sequence  
 *
 * *******************************/
int hailstoneMath(int calcNum)
{
	if(calcNum % 2 ==0)
	{
	calcNum = calcNum/2;
	}
	else
	{
	calcNum = (calcNum*3)+1;
	}  
	return calcNum;
}
/*********************************
 * Hailstone
 * Keeps a running loop count of the numbers in the sequence. leverages against another function to do the math.
 *
 * *******************************/
int hailstone (int calcNum)	
{
	int loopCount =0; 
	while(calcNum !=1)
	{
		calcNum = hailstoneMath(calcNum);
		loopCount++;
	}
	return loopCount;
	}

