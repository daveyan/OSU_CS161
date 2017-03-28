/*********************************************************************
** Author: David Yan
** Date: 12/3/15
** Description: Implemetation file for the class Book
*********************************************************************/
#include "Book.hpp"

/*********************************************************************
** Description: Book
** A constructor that initialized the parameters and some of the data members
*********************************************************************/
Book::Book(std::string idc, std::string t, std::string a)
{
	idCode = idc;
	title = t;
	author = a;
	checkedOutBy = NULL;
	requestedBy = NULL;
	location= ON_SHELF;
}
/*********************************************************************
** Description: getCheckOutLength
** Accessor function that returns the data member checkoutlength
*********************************************************************/
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}
/*********************************************************************
** Description: getIdCode
** Accessor function that returns the data member idCode
*********************************************************************/
std::string Book::getIdCode()
{
	return idCode;
}
/*********************************************************************
** Description: getTitle
** Accessor function that returns the data member title
*********************************************************************/
std::string Book::getTitle()
{
	return title;
}
/*********************************************************************
** Description: getAuthor
** Accessor function that returns the data member author
*********************************************************************/
std::string Book::getAuthor()
{
	return author;
}
/*********************************************************************
** Description: getLocation
** Accessor function that returns the data member location
*********************************************************************/
Locale Book::getLocation()
{
	return location;
}
/*********************************************************************
** Description: setLocation
** Mutator function that sets the parameter to the data member location
*********************************************************************/
void Book::setLocation(Locale lc)
{
	location = lc;
}
/*********************************************************************
** Description: getCheckedOutBy
** Accessor function that returns the data member checkedoutby
*********************************************************************/
Patron * Book::getCheckedOutBy()
{
	return checkedOutBy;
}
/*********************************************************************
** Description: setCheckOutBy
** Mutator function that sets the parameter to the data member checkedoutby
*********************************************************************/
void Book::setCheckedOutBy(Patron *pat)
{
	checkedOutBy = pat;
}
/*********************************************************************
** Description: getRequestedBy
** Accessor function that returns the data member requestedby
*********************************************************************/
Patron * Book::getRequestedBy()
{
	return requestedBy;
}
/*********************************************************************
** Description: setRequestedBy
** Mutator function that sets the parameter to the data member requestedby
*********************************************************************/
void Book::setRequestedBy(Patron *pat)
{
	requestedBy = pat;
}
/*********************************************************************
** Description: getDateCheckedOut
** Accessor function that returns the data member datecheckedout
*********************************************************************/
int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}
/*********************************************************************
** Description: setDateCheckedOut
** Mutator function that sets the parameter to the data member datecheckedout
*********************************************************************/
void Book::setDateCheckedOut(int dco)
{
	dateCheckedOut = dco;
}
