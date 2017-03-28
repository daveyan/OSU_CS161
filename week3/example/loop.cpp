#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int num, loop, guess, seed;
	seed = time(0);
	srand(seed);

	num = rand()%50;
	
	cout << "the correct number is " << num << endl;

	for(loop=0; loop<5; loop ++)

		{
		cout << "Enter a guess 0-49:";
		cin >> guess;

			if (guess == num) 
			{	
			cout <<"good guess!" << endl;
			break;
			}
		}		 
	if(loop<5)

	cout << "It took you " << loop+1  << " guesses" << endl;
	return 0;
}		
	 
