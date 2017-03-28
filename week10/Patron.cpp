/*********************************************************************
** Author: David Yan
** Date: 12/3/15
** Description: Implemetation file for the class Patron
*********************************************************************/
#include "Patron.hpp"
#include <algorithm>
#include <iostream>
/*********************************************************************
** Description: Patron
** A constructor that initialized the data members based on the given parameters 
*********************************************************************/
Patron::Patron(std::string idn, std::string n)
{
	idNum = idn;
	name = n;
	fineAmount = 0;

}
/*********************************************************************
** Description: getIdNum
** Accessor function that returns the data member idNum
*********************************************************************/
std::string Patron::getIdNum()
{
	return idNum;
}
/*********************************************************************
** Description: getName
** Accessor function that returns the data member name
*********************************************************************/
std::string Patron::getName()
{
	return name;
}
/*********************************************************************
** Description: getCheckedOutBooks
** Accessor function that returns the data member checkedoutbooks (vector)
*********************************************************************/
std::vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}
/*********************************************************************
** Description: addBook
** receives a paramete b (Book) - this is added the patron's vector checkoutbooks
** this is done with the vector method push_back
*********************************************************************/
void Patron::addBook(Book * b)
{
	checkedOutBooks.push_back(b);
}
/*********************************************************************
** Description: removeBook
** recieves a parameter b (Book) - loops through the patron's vector checkedoutbooks
** if the patron checked out the book, it "erase" the book from the vector
*********************************************************************/
void Patron::removeBook(Book * b)
{
	for (int i = 0; i < getCheckedOutBooks().size(); i++)
	{
		if (getCheckedOutBooks()[i] == b)
			checkedOutBooks.erase(checkedOutBooks.begin()+i);
	}
}
/*********************************************************************
** Description: getFineAmount
** accessor function that returns the data member fineamount
*********************************************************************/
double Patron::getFineAmount()
{
	return fineAmount;
}
/*********************************************************************
** Description: amendFine
** received a parameter amount and calculated the new fineamount for the patron
** positive - increase total fine
** negative - decrease total fine
*********************************************************************/
void Patron::amendFine(double amount)
{
	fineAmount += amount;
}
