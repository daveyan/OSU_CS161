/*********************************
 * Author: Davd Yan
 * Date: 10/13/15
 * Description - This program reads the values of a file and creates and output file with the total sum
 * ****************************/ 	
 

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream inputFile;
	ofstream outputFile;
	string	 filenameGiven;
	double	 readVal,
		 totalVal;

	cout <<"Enter the name of the file that you would like opened." <<endl;
	getline(cin,  filenameGiven);
	
	//reading the file for the information
	inputFile.open(filenameGiven.c_str());
	if(inputFile)
	{
		while(inputFile >> readVal)
		{
		totalVal+= readVal;
		}
	//	cout <<"Total value is " <<totalVal <<endl;
		inputFile.close();
	}	
	else
	{
		cout <<"Could not access file.\n"; 
	}

	//creating an output file based off of the read file
	
	outputFile.open("sum.txt");
	if(outputFile)
	{
		outputFile <<  totalVal;
		outputFile.close();
	}
	else
		cout<<"Could not access file.";
	 
	

return 0;
}
 
