/********************************
**Author: David Yan
**Date: 9/27/15
**Description: Week 1 assignment - Favorite animal questionnaire 
**********************************/
#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal."<< std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the "<< faveAnimal;
	std::cout << "." << std::endl;

	return 0;
}
