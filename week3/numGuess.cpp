/*********************************************
 * Author:David Yan
 * Date: 10/11/15
 * Description:A number guessing game
 * ********************************************/
    
#include <iostream>
using namespace std;

int main()
{	
	int totalGuess; 
	double guessNum, playerGuess;

	cout << "Enter the number for the player to guess.\n";
	cin >> guessNum;

	cout << "Enter your guess.\n";
	cin >> playerGuess;

	for(totalGuess = 1; playerGuess != guessNum; totalGuess++)
	{
		if(playerGuess > guessNum)
		{
		cout <<"Too high - try again.\n";
	//	cout <<"total guess" << totalGuess<< endl;
		cin >> playerGuess;
		}
		else if (playerGuess < guessNum)
		{
		cout <<"Too low - try again.\n";
	//	cout <<"total guess" << totalGuess<< endl;
		cin >> playerGuess;
		}

	}
	cout << "You guessed it in " << totalGuess << " tries.\n";
  
	return 0;
}	
