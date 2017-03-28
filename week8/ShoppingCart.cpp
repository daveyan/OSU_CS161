/*********************************************************************
** Author: David Yan
** Date: 11/18/15
** Description: Shopping Cart Class definition.
** Contains 2 functions "addItem" and "totalPrice" 
*********************************************************************/

#include "ShoppingCart.hpp"
#include <iostream>

/*********************************************************************
** Description: Default Constructor
** Initializing the array of Item Pointers to NULL
** Initializing the arrayEnd to 0
*********************************************************************/
ShoppingCart::ShoppingCart()
{
	for (int loopCount = 0; loopCount < MAX; loopCount++)
	{
		*(arrayItem + loopCount) = NULL;
	}
	arrayEnd = 0;
}
/*********************************************************************
** Description: addItem Function
** Takes an Item pointer as a parameter and adds it to the data member array
** Iterates the arrayEnd memeber to keep track of the elements in the array
*********************************************************************/
void ShoppingCart::addItem(Item *itemName)
{
	arrayItem[arrayEnd] = itemName;
	arrayEnd++;
}
/*********************************************************************
** Description: totalPrice Function
** Defines and accumulator "sum" (double) which is returned to the main
** Loops through the Item pointer array, multiplying the price and quantity
*********************************************************************/
double ShoppingCart::totalPrice()
{
	double sum = 0.0;
	for (int loopCount2 = 0; loopCount2 < arrayEnd; loopCount2++)
	{
		double price = arrayItem[loopCount2]->getPrice();
		int quantity = arrayItem[loopCount2]->getQuantity();
		sum += (price*quantity);
	}
	return sum;
		
}
