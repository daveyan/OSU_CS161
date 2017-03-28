#include<iostream>
using namespace std;

int main()
{
	int x;	

	cout <<"enter a whole number:";
	cin >> x;

/*	if(x>=1 && x<=5)
		cout <<"your number is between 1-5" << endl;
	else if(x<1)
		cout <<"your number is less than 5" << endl;
	else 
		cout <<"your number is greater than 5" << endl;
	
*/

	switch(x) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "your number is between 1-5!" << endl;
			break;
		default:
			cout << "you are out of range!" << endl;
	
	}

	(x>=1 && x<=5)?cout <<" you are in range"<< endl :cout << "you are our of range" << endl;
	return 0;

}


