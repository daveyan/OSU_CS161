#include "Item.hpp"
#include <string>


using namespace std;

//Default constructor - initializing everthing to null or 0
Item::Item()
{
	name = "";
	price = 0;
	quantity = 0;
}
//Constructor - takes three parameters and sets them to earh member variable
Item::Item(string objName, double objPrice, int objQuantity)
{
	setName(objName);
	setPrice(objPrice);
	setQuantity(objQuantity);
}

//Accessor functions
string Item::getName()
{
	return name;
}

double Item::getPrice()
{
	return price;
}

int Item::getQuantity()
{
	return quantity;
}

//Mutator functions
void Item::setName(string objName)
{
	name = objName;
}
void Item::setPrice(double objPrice)
{
	price = objPrice;
}
void Item::setQuantity(int objQuantity)
{
	quantity = objQuantity;
}
		
