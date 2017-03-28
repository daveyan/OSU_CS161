

//#include "stdafx.h"
#include <vector>
#include <iostream>	
#include <algorithm>

using namespace std;

const int CAPACITY = 5;

vector<double> findMode(double arrayFromMain[], int arraySize);

int main()
{
	double mainArray[CAPACITY];

	int arraySize = 0;


	vector<double> test;

	cout << "enter 5 values " << endl;

	for (int arrayElement = 0; arrayElement < CAPACITY; arrayElement++)
	{
		arraySize++; //this counter will be passed as a parameter to the findMode function.

		cin >> mainArray[arrayElement];

	}


	test = findMode(mainArray, arraySize);

	for (int i = 0; i < test.size(); i++)
	{
		cout << "The mode is " << test[i] << endl;
	}
	return 0;
}

vector<double> findMode(double arrayFromMain[], int arraySize)
{
	int OccuranceFunction[CAPACITY] = { 0 }; //OccuranceFunction holds the occurances of each number. initialized to 0 with a max capacity of N
	double arrayNum;
	int noMode = 0; //boolean test to see if there is a mode
	int highestOccur = 0; //this is the number that appears most often in the OccuranceFunction
						
	//vector stuff
	vector<double> modeNums;
	//go through all values in the array
	for (int loop = 0; loop < arraySize; loop++)
	{
		int count = 0; //count is the measure of occurances of a number
		arrayNum = arrayFromMain[loop];

				for (int loop2 = loop; loop2 < arraySize; loop2++)
				{
					if (arrayNum == arrayFromMain[loop2])
					{
					count++;
					}
				}

				OccuranceFunction[loop] = count; //if the count of a number does not increase above 1, then there is no mode.
				if (count >= 2)
				{
					cout << "arrayNum " << arrayNum << " count " << count << endl;
					noMode++;
				}
		
	}
	//we initialized noMode at 0"false" and it will only increment to 1"true" if the count goes over 1 (>=2)
	if (noMode == 0)
	{
		cout << "There is no mode. There is only one instance of each value. Therefore each instance can be considered a mode. " << endl;
		for (int loop5 = 0; loop5 < arraySize; loop5++)
		{
			modeNums.push_back(arrayFromMain[loop5]);
		}
		sort(modeNums.begin(), modeNums.end());
		return modeNums;
	}
	//loop for assigning the highest occuring element as the mode
	for (int loop3 = 0; loop3 < arraySize; loop3++)
	{
		//is this the highest occuring value?
		if (OccuranceFunction[loop3] > highestOccur) 
		{
			highestOccur = OccuranceFunction[loop3]; //if yes, then this is the new the new modee
		}
	}
	
	//LOOP FOR PUSHING ELEMENTS INTO VECTOR
	for (int loop5 = 0; loop5 < arraySize; loop5++)
	{
		if (highestOccur == OccuranceFunction[loop5])
		{
			modeNums.push_back(arrayFromMain[loop5]);
		}
	}
	sort(modeNums.begin(), modeNums.end());


	return modeNums;







}

