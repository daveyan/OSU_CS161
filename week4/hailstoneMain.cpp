#include <iostream>
using namespace std;

int hailstone(int number);

int main()
{
	int plusNum,		
	    seqNum;
	
	cout <<"Please enter a positive integer\n";		
	cin >> plusNum;

	
	seqNum = hailstone(plusNum);

	cout << "This hailstone seqence will consist of " << seqNum << " number" <<endl;
return 0;
}

 
