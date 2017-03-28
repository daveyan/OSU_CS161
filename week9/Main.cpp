#include "IntSet.hpp"
#include <iostream>

using namespace std;

int main()
{
	IntSet is1;
	IntSet is2;
	int msize = 0;
	bool x =false;

	x = is1.isEmpty();


	is1.add(1);
	is1.add(2);
	is1.add(3);
	is1.add(4);
	is1.add(5);
	is1.add(6);
	is1.add(7);
	is1.add(8);
	is1.add(9);
	is1.add(10);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);
	is1.add(11);

	is2.add(2);
	is2.add(4);
	is2.add(6);
	is2.add(8);
	is2.add(10);
	is2.add(12);
	is2.add(14);
	is2.add(16);
	is2.add(18);
	is2.add(20);
	

/*	cout << "array 1" << endl;
	is1.getArray();
	cout << "array 2" << endl;
	is2.getArray();


	is1.removeSame(is2);
	cout << "array 1" << endl;
	is1.getArray();
	cout << "array 2" << endl;
	is2.getArray();

	is1.addAll(is2);
	cout << "array 1" << endl;
	is1.getArray();
	cout << "array 2" << endl;
	is2.getArray();
*/

	
	//is1.removeDifferent(is2);

	//is1.addAll(is2);

	//see if 6 is added to the array 1
	/*for (int i = 0; i < is1.size(); i++)
		cout << "Does the array contain " << i + 1 << "? " << boolalpha << is1.contains(i + 1) << endl;

	cout << endl;
	msize =is1.size();
	cout <<"There are " <<msize << " elements in the array"<<endl <<endl;

	is1.remove(21);
*/
	cout << "\nThis is the contains test\n";
	for (int i = 0; i < is1.size(); i++)
		cout << "Does the array contain " << i+1 << "? " << boolalpha <<is1.contains(i+1) << endl;

	cin.ignore();
	cin.get();

	return 0;
}