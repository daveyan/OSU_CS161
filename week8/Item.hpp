#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

using namespace std;

class Item
{
private:
	string name;
	double price;
	int quantity;
public:
	Item();
	Item(string objName, double objPrice, int objQuantity);
	string getName();
	double getPrice();
	int getQuantity();
	void setName(string objName);
	void setPrice(double objPrice);
	void setQuantity(int objQuantity);

};

#endif

