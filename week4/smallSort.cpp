/*********************************************************
 * Author: David Yan
 * Date: 10/19/15
 * Description: A 3 number sort function that calls upon another function "swap" to do the heavy lifting   
 * ********************************************************/


#include <iostream>
using namespace std;

/*************************************************************
 * **************Swap number**********************************
 * Swaps two values by holding one of them in a temp location* 
 * ***********************************************************/
void swap(double &aNum, double &bNum)
{
	double swapTemp = aNum;
	aNum = bNum;
	bNum = swapTemp;
 	return;
}

/****************************************************************************
 ************************** Number Sorter************************************
 * Evaluated each combination of three numbers to swap the larger number into the correct position
 * *********************************************************************`****/
void smallSort(double &num1, double &num2, double &num3)
{

//cout << num1 <<"/ "<< num2 <<"/ "<< num3 << endl;
	if(num1>num2)	
	{
	swap(num1,num2);
	}		
	if(num1>num3)
	{
	swap(num1,num3);
	}
 	if(num2>num3)
	{
	swap(num2,num3);
	}
			
}

