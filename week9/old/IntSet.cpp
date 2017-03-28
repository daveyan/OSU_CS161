#include "IntSet.hpp"
#include <iostream>
using namespace std;


IntSet::IntSet()
{
	arraySize = 10;
	arrayValue = 0;
	dArray = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
		dArray[i] = arrayValue;

}

IntSet::~IntSet()
{
	delete[] dArray;
}

int IntSet::size()
{
	return arrayValue;
}

bool IntSet::isEmpty()
{
	bool emptyTest = false;
	if (arrayValue <= 0)
		emptyTest = true;
	return emptyTest;
}

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

void IntSet::add(int numAdd)
{
	if (arrayValue < arraySize)
	{
		if (contains(numAdd))
		{

//			cout << "The number (" << numAdd << ") already exists in the array\n";
//			cout << "This number was not added to the array\n\n";
		}

		else if (!contains(numAdd))
		{
			dArray[arrayValue] = numAdd;
			arrayValue++;
//			cout << "The number (" << numAdd << ") has been added successfully" << endl;
//			cout << "The new number is element (" << arrayValue << ") out of (" << arraySize << ")" << endl << endl;
		}
	}
	else if (arrayValue >= arraySize)
	{
//		cout << "There is no room for the new number ("<< numAdd <<")"<<endl <<endl;
		
		//Create new Array with double Capacity
		arraySize *= 2;
		int *newDArray = new int[arraySize];
		
		for (int index = 0; index < arrayValue; index++)
		{
			newDArray[index] = dArray[index];	//copying dArray to newDArray
		}
		delete []dArray;
		dArray = newDArray;

//		cout << "A new array has been created! It has a new capacity of (" << arraySize << ")";
		 
		dArray[arrayValue] = numAdd;
		arrayValue++;
//		cout << "\nThe number (" << numAdd << ") has been added successfully" << endl;
//		cout << "The new number is element (" << arrayValue << ") out of (" << arraySize << ")" << endl << endl;

	}
}

void IntSet::remove(int numRemove)
{

		if (contains(numRemove))
		{

		//	cout << "The number (" << numRemove << ") is in the array" << endl;
			int removeIndex =-1;

			for (int j = 0; j < arrayValue; j++)
			{
				if (dArray[j] == numRemove)
				{
					removeIndex = j;
					//cout << numRemove << " is located at element " << removeIndex << endl;
					for (int k = j; k < (arrayValue-1); k++)
					{
						dArray[k] = dArray[k + 1];
				//		cout << "now that " << numRemove << " has been removed. All of the other elements have shifted over\n";
					//	cout << "element " << k << " is now equal to " << dArray[k] << endl;
						
					}
					arrayValue--;
				//	cout <<"there are now only " << arrayValue << " elements in the array\n";
					
				}
			}
	/*		cout << "values in the array ";
			for (int a = 0; a < arrayValue; a++)
				cout << dArray[a] << " ";
			cout << endl;
	*/
		}
		else
		{
//			cout << "The number (" << numRemove << ") is not in the array" << endl;
		}
	
}

void IntSet::addAll(IntSet &is)
{
	for (int m = 0; m < is.arrayValue; m++)
	{
		if (is.dArray[m] == dArray[m])
		{
	//		cout << "The values in the two arrays match ";
	//		cout << " (is1 " << dArray[m] << ") (is2 " << is.dArray[m] <<")"<< endl;
		}
		else if (is.dArray[m] != dArray[m])
		{
	//		cout << is.dArray[m] << " is missing from array 1\n";
			add(is.dArray[m]);
		}
			
	}
}

void IntSet::removeDifferent(IntSet &is)
{
	for (int m = 0; m < arrayValue; m++)
	{
		if (is.dArray[m] == dArray[m])
		{
//			cout << "The values in the two arrays match ";
//			cout << " (is1 " << dArray[m] << ") (is2 " << is.dArray[m] << ")" << endl;
		}
		else if (dArray[m] != is.dArray[m])
		{
//			cout << dArray[m] << " is extra in array 1\n";
			remove(dArray[m]);
		}

	}
}

void IntSet::removeSame(IntSet &is)
{
	for (int outer = 0; outer < arrayValue; outer++)
	{
		for (int inner = 0; inner < is.arrayValue; inner++)
		{
			if (dArray[outer] == is.dArray[inner])
				remove(dArray[outer]);
		}
	}

}

void IntSet::getArray()
{
	for (int c = 0; c < arrayValue; c++)
		cout << dArray[c] << " ";
	cout << endl;
}

