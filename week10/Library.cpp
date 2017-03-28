/*********************************************************************
** Author: David Yan
** Date: 12/3/15
** Description: Implemetation file for the class Library
*********************************************************************/
#include "Library.hpp"
#include <iostream> 
#include <string>
#include <algorithm>

/*********************************************************************
** Description: Library
** constructor that sets the data member currentdate to 0
*********************************************************************/
Library::Library()
{
	currentDate = 0;
}								
/*********************************************************************
** Description: addBook
** adds the parameter b (Book) to the datamember vector holdings
*********************************************************************/
void Library::addBook(Book *b)
{
	holdings.push_back(b);
}
/*********************************************************************
** Description: addPatron
** adds the parameter p (Patron) to the datamember vector members
*********************************************************************/
void Library::addPatron(Patron *p)
{
	members.push_back(p);

}
/*********************************************************************
** Description: checkOutBook
** allows a pID (Patron) to check out bID (book)
*********************************************************************/
std::string Library::checkOutBook(std::string pID, std::string bID)
{
	//Check to see if the book exists in the holdings
	if (getBook(bID) == NULL)
		return "book not found";
	//Check to see if the patron exists in members
	if (getPatron(pID)==NULL)
		return "patron not found";
	//Check to see if the book is in the library
	if (getBook(bID)->getLocation() == CHECKED_OUT)
		return "book already checked out";
	//Check to see if Patron is the one HOLDING the book 
	if (getBook(bID)->getRequestedBy() == getPatron(pID))
	{
		//Updating the book information
		getBook(bID)->setCheckedOutBy(getPatron(pID));
		getBook(bID)->setDateCheckedOut(currentDate);
		getBook(bID)->setLocation(CHECKED_OUT);

		if (getBook(bID)->getRequestedBy() == getPatron(pID))
		{
			getBook(bID)->setRequestedBy(NULL);
		}
		//adding the book to the patrons vector
		getPatron(pID)->addBook(getBook(bID));
		return "check out successful";
	}
	//Check to see if book is on hold for another
	if (getBook(bID)->getLocation() == ON_HOLD_SHELF)
		return "book is on hold by other";
	//Since all of the above requirements is fullfilled we can check out the book
	if (getBook(bID)->getLocation() == ON_SHELF)
	{
		//Updating the book information
		getBook(bID)->setCheckedOutBy(getPatron(pID));
		getBook(bID)->setDateCheckedOut(currentDate);
		getBook(bID)->setLocation(CHECKED_OUT);

		if (getBook(bID)->getRequestedBy() == getPatron(pID))
		{
			getBook(bID)->setRequestedBy(NULL);
		}
		//adding the book to the patrons vector
		getPatron(pID)->addBook(getBook(bID));
	}
	return "check out successful";
}
/*********************************************************************
** Description: returnBook
** returns b (Book) to the library
*********************************************************************/
std::string Library::returnBook(std::string bID)
{
	//Check to see if this book exists
	if (getBook(bID) == NULL)
		return "book not found";
	//Check to see if this book is already back in the library
	if (getBook(bID)->getLocation() == ON_SHELF)
		return "book already in library";
	//if the book has been checked out, it can be returned
	if (getBook(bID)->getLocation() == CHECKED_OUT)
	{
		//Checked to see if it is being requested by another patron
		if (getBook(bID)->getRequestedBy() != NULL)
			getBook(bID)->setLocation(ON_HOLD_SHELF); //if yes move to the on hold shelf
		else
			getBook(bID)->setLocation(ON_SHELF);	  //if no move back to the shelf for checkout
	}
		//Get the patron ID so that we can remove it from their vector
		std::string PID = (getBook(bID)->getCheckedOutBy())->getIdNum();
		//Remove the book from the patron
		getPatron(PID)->removeBook(getBook(bID));

		return "return successful";
	
}
/*********************************************************************
** Description: requestBook
** allows the patron to see aside a book to the on hold shelf
*********************************************************************/
std::string Library::requestBook(std::string pID, std::string bID)
{
	//check to see if the book exists in the library
	if (getBook(bID) == NULL)
		return "book not found";
	//check to see if the patron exists in the library
	if (getPatron(pID) == NULL)
		return "patron not found";
	//check to see if this book is already on hold
	if (getBook(bID)->getRequestedBy() != NULL)
		return "book is already on hold";
	//check to see if book is available for hold
	if (getBook(bID)->getRequestedBy() == NULL)
	{
		//the book is now on hold
		getBook(bID)->setRequestedBy(getPatron(pID));
		//move the books location to on hold if in the library
		if (getBook(bID)->getLocation() == ON_SHELF)
			getBook(bID)->setLocation(ON_HOLD_SHELF);
	}
	return "request successful";
}
/*********************************************************************
** Description: payFine
** allows the patron to pay the fine that they've earned by not returning 
** their books on time. SHAME ON THEM
*********************************************************************/
std::string Library::payFine(std::string pID, double payment)
{
	//Check to see if the patron exists in this library
	if (getPatron(pID)==NULL)
		return "patron not found";
	//if they do exists use the amendFine (patron method) to update
	else
	{
		getPatron(pID)->amendFine(payment);
		return "payment successful";
	}
}
/*********************************************************************
** Description: incrementCurrentDate
** checks all memebers books and if they are over due, charge them $.10
*********************************************************************/
void Library::incrementCurrentDate()
{
	//loop through all members
	for (int i = 0; i < members.size(); i++)
	{
		//size of patrons checkedoutvector
		int numOfBooks = (members[i]->getCheckedOutBooks()).size();
		//loop through all books that the member holds
		for (int j = 0; j < numOfBooks; j++)
		{
			if ((currentDate - holdings[j]->getDateCheckedOut()) >(holdings[j]->getCheckOutLength()))
				members[i]->amendFine(0.10);
		}
	}
	//another day passes
	currentDate++;
	
}
/*********************************************************************
** Description: getPatron
** returns a pointer to the Patron corresponding to the ID parameter,
** or NULL if no such Patron is in the members
*********************************************************************/
Patron * Library::getPatron(std::string pID)
{
	int membersSize = members.size();
	
	for (int i = 0; i < membersSize; i++)
	{
		std::string patID;
		patID = members[i]->getIdNum();

		if (patID == pID)
		{
			return members[i];
		}
	}
	return NULL;
}
/*********************************************************************
** Description: getBook
** returns a pointer to the Book corresponding to the ID parameter,
** or NULL if no such Book is in the holdings
*********************************************************************/
Book * Library::getBook(std::string bID)
{
	int holdingsSize = holdings.size();

	for (int i = 0; i < holdingsSize; i++)
	{
		std::string bookID;
		bookID = holdings[i]->getIdCode();

		if (bookID == bID)
		{
			return holdings[i];
		}
	}
	return NULL;
}


