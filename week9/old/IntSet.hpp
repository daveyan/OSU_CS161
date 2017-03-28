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
	void addAll(IntSet &is);
	void removeDifferent(IntSet &is);
	void removeSame(IntSet &is);
	void getArray();
};

#endif

