/*********************************************************************
** Author: David Yan
** Date: 11/23
** Description: Header file for the class IntSet
*********************************************************************/
#ifndef INTSET_HPP
#define INTSET_HPP

class IntSet
{
private:
	int *dArray;
	int arraySize;
	int arrayValue;
public:
	IntSet();
	~IntSet();
	int size();
	bool isEmpty();
	bool contains(int numContains);
	void add(int numAdd);
	void remove(int numRemove);
	void addAll(const IntSet &is);
	void removeDifferent(const IntSet &is);
	void removeSame(const IntSet &is);
};

#endif

