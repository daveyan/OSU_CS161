/*********************************************************************
** Author: David Yan
** Date: 11/23
** Description: Implementation file for the class IntSet
** functions includes a method for creating a union, intersection, and
** relative complement for two arrays
*********************************************************************/
#include "IntSet.hpp"
#include <iostream>
using namespace std;

/*********************************************************************
** Description: Default Constructor
** dArray - Array of pointer Ints that can dynamically change size
** arraySize - This is the max capacity of the Array
** arrayValue - This is the current number of elements in the array
*********************************************************************/
IntSet::IntSet()
{
	arraySize = 10;
	arrayValue = 0;
	dArray = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
		dArray[i] =NULL;

}
/*********************************************************************
** Description: Destructor
** Removes the array "dArray" from the heap when the object is destroyed
*********************************************************************/
IntSet::~IntSet()
{
	delete[] dArray;
}
/*********************************************************************
** Description: Size
** Returns the data memeber "arrayValue"
*********************************************************************/
int IntSet::size()
{
	return arrayValue;
}
/*********************************************************************
** Description: is Empty
** Boolean test to see if there are elements in the "dArray"
*********************************************************************/
bool IntSet::isEmpty()
{
	bool emptyTest = false;
	if (arrayValue <= 0)
		emptyTest = true;
	return emptyTest;
}
/*********************************************************************
** Description: contains
** Boolean test to see the the passed parameter exists within "dArray"
*********************************************************************/
bool IntSet::contains(int numContains)
{
	bool containsTest = false;
	for (int j = 0; j < arraySize; j++)
	{
			if (dArray[j] == numContains)
			containsTest = true;
	}
	return containsTest;
}
/*********************************************************************
** Description: add
** Adds the int parameter to dArray if it is unique
** If there is no room the array, the int parameter is stored in 
** a new array is created with twice the capacity (also assuming it's unique)
*********************************************************************/
void IntSet::add(int numAdd)
{
	if (arrayValue < arraySize)
	{
		if (contains(numAdd))						
		{
														//Parameter is not unique to dArray - no action is taken by the program
		}

		else if (!contains(numAdd))						//Parameter is UNIQUE to dArray - parameter is added to array, arrayValue increments
		{
			dArray[arrayValue] = numAdd;
			arrayValue++;								//New integer was added successfully. The Array size has increase
		}
	}
	else if (arrayValue >= arraySize)					//There is no room in the array for the new pra
	{
		arraySize *= 2;									//Capacity of the array has been doubled
		int *newDArray = new int[arraySize];

		for (int index = 0; index < arrayValue; index++)
		{
			newDArray[index] = dArray[index];			//dArray is being copied to newDArray
		}
		delete[]dArray;									//dArray has been deallocated
		dArray = newDArray;								//dArray now points to newDArray


		if (contains(numAdd))							
		{
														//Parameter is not unique to dArray - no action is taken by the program
		}

		else if (!contains(numAdd))						//Parameter is UNIQUE to dArray - parameter is added to array, arrayValue increments
		{
			dArray[arrayValue] = numAdd;
			arrayValue++;								//New integer was added successfully. The Array size has increase
		}
		
	}
}
/*********************************************************************
** Description: remove
** Remove the int parameter from dArray
** All subsequent array elements shift down an element to fill the gap
*********************************************************************/
void IntSet::remove(int numRemove)
{

		if (contains(numRemove))							//test to see if the element exists within dArray
		{
			int removeIndex =-1;							//removeIndex initialized to -1 as the array element position

			for (int j = 0; j < arrayValue; j++)
			{
				if (dArray[j] == numRemove)					//looks through the array for the numRemove
				{
					removeIndex = j;						//stores the location of the numRemove in the removeIndex
					for (int k = j; k < (arrayValue-1); k++)
					{
						dArray[k] = dArray[k + 1];			//writes over the element that needs to be removed with the next element
					}
					arrayValue--;							//the arraySize decrement
			
					
				}
			}
		}
		else
		{
															//Int parameter does not exist within dArray - no action is done 
		}
	
}
/*********************************************************************
** Description: addAll
** function that accepts a const parameterto looks through two IntSet arrays. If there are missing
** elements in array1, from array2, they are added.
*********************************************************************/
void IntSet::addAll(const IntSet &is)
{
	for (int m = 0; m < is.arrayValue; m++)
	{
		if (is.dArray[m] == dArray[m])
		{
															//Elements between the two sets are identical - no action is done 
		}
		else if (is.dArray[m] != dArray[m])
		{
			add(is.dArray[m]);								//Missing element from array2 is added to array1	
		}
			
	}
}
/*********************************************************************
** Description: removeDifferent
** function that accepts a const parameterto looks through two IntSet arrays. If there are elements
** that are in array2, but not array1, they will be removed from array1
*********************************************************************/
void IntSet::removeDifferent(const IntSet &is)
{
	for (int m = 0; m < arrayValue; m++)
	{
		if (is.dArray[m] == dArray[m])
		{			
															//Elements between the two sets are identical - no action is done
		}	
		else if (dArray[m] != is.dArray[m])			
		{
			remove(dArray[m]);								//Extra array element in array1 is removed
		}

	}
}
/*********************************************************************
** Description: removeSame
** If there are any identical elements between the two array, they will be 
** removed from array1.
*********************************************************************/
void IntSet::removeSame(const IntSet &is)
{
	for (int outer = 0; outer < arrayValue; outer++)				// checking array1 element "outer array" against all array2 elements "inner array"
	{
		for (int inner = 0; inner < is.arrayValue; inner++)			
		{
			if (dArray[outer] == is.dArray[inner])
				remove(dArray[outer]);								//remove any identical elements from array1
		}
	}

}



