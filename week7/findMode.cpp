/*****************************************************************
 * Author:David Yan
 * Date 11/10/15
 * Description - This program contains a function "findMode" that passes through the values of a given array and multiple times to calculate the mode the array. This information is collected and is passed back to the main function as a vector.
 * *************************************************************/


#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;

const int CAPACITY = 10;

vector <double> findMode(double [],int); 	//function prototype  




int main()
{
	double mainArray[CAPACITY];		//this will be passed as a parameter to the function findMode
	int arraySize =0;			//this will be passed as a parameter to the function findMode
	vector<double> mainReturnVector;	//this will be used to store the return vector from the function findMode
	
	//gathering the integers for an array
	cout << "enter 10 values" << endl;

	for (int arrayElement =0; arrayElement < CAPACITY; arrayElement++)
	{
		arraySize++;	
		cin >> mainArray[arrayElement];
		cout << "this is arrayElement" << arrayElement <<endl;
		cout << "this is the CAPACITY" << CAPACITY << endl;			
	}
	//calling on the function findMode.
	mainReturnVector = findMode(mainArray,arraySize);

	for (int loopCount = 0; loopCount < mainReturnVector.size(); loopCount++)
	{
		cout << mainReturnVector[loopCount] << " ";
	}


return 0;
}

vector<double> findMode(double arrayFromMain[], int arraySize)
{
	int occuranceArray[CAPACITY] ={0};	//array to hold the number of occurances for each number in the array
	double arrayNum;		//the number found within the array passed by the main function
	int noMode =0;			//to be used as a test to see if there is a mode 
	int numOfOccur=0;		//the number of occurances
	int highestOccur =0;		//the mode

	vector<double> modeNum;		//this is the vector that will be returned to the main.


	//This loop checks to see if there is a mode in the function
	//This is done by using the variable numOfOccur as a counter.
	//Every instance of an element should only occur once. Should
	//it exceed 1 (>=2) we will know that there exists a mode.
	for (int loopCount =0; loopCount < arraySize; loopCount++)
	{
		arrayNum = arrayFromMain[loopCount];
			for(int loopCount2 = loopCount; loopCount2 < arraySize; loopCount++)
			{
				if(arrayNum == arrayFromMain[loopCount2])
					{
						numOfOccur++;
					}
			}
			occuranceArray[loopCount] = numOfOccur;
			if (numOfOccur >=2)
			{
				noMode++;
			}		
				
	}

	//If there is no mode in the data set, we will need to display all data members.
	//this loop returns all of the values in the array as a vector to the main function
	if(noMode ==0)
	{
		for (int loopCount =0; loopCount < arraySize; loopCount++)
		{
			modeNum.push_back(arrayFromMain[loopCount]);
		}
		sort(modeNum.begin(),modeNum.end());
		return modeNum;
	}
	//If there is a mode in the data set, we will need to calculate element
	//appears most often. This is then stored into the variable highestOccur.
	for (int loopCount =0; loopCount < arraySize; loopCount++)
	{
		if(occuranceArray[loopCount] > highestOccur)
		{
			highestOccur = occuranceArray[loopCount];
		}	
	}
	//This loop pushes back the highest occuring element (mode) into the vector modeNum.
	//this loop returns all of the values in the array as a vector to the main function
	for (int loopCount =0;loopCount < arraySize; loopCount++)
	{
       		if (highestOccur == occuranceArray[loopCount])
		{
			modeNum.push_back(arrayFromMain[loopCount]);
		}		
	}
	sort(modeNum.begin(),modeNum.end());


	return modeNum;
}

