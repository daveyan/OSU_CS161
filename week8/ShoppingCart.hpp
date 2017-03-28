#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include "Item.hpp"

const int MAX = 100;

class ShoppingCart
{
	private:
		Item *arrayItem[MAX];
		int arrayEnd;
	public:
		void addItem(Item *itemName);
		double totalPrice();
		ShoppingCart();
};


#endif
