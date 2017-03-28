#include <iostream>
#include <string>
#include <vector>
#include "Library.hpp"
#include <iomanip>
using namespace std;

int main()
{
	Book b1("b1", "t1", "a1");
	Book b2("b2", "t2", "a2");
	Patron p1("p1", "n1");
	Patron p2("p2", "n2");
	Library lib;
	lib.addBook(&b1);
	lib.addBook(&b2);
	lib.addPatron(&p1);
	lib.addPatron(&p2);

	cout << lib.checkOutBook("p1", "b1") << endl;

	for (int i = 0; i < 1; i++)
	{
	
		lib.incrementCurrentDate();
		
	}	
	lib.checkOutBook("p1", "b2");
	for (int i = 0; i < 22; i++)
	{

		lib.incrementCurrentDate();
		
	}
	double p1Fine = p1.getFineAmount();
	cout << "P1 Fine " << fixed << setprecision(2) << p1Fine << endl;
	cout << lib.requestBook("p2", "b1") << endl;
	cout << lib.returnBook("b1") << endl;
	for (int i = 0; i < 22; i++)
	{

		lib.incrementCurrentDate();

	}
	p1Fine = p1.getFineAmount();
	cout << "P1 Fine " << fixed << setprecision(2) << p1Fine << endl;

	cout << lib.returnBook("b1") << endl;
	cout << lib.payFine("p1", -2.30) << endl;
	p1Fine = p1.getFineAmount();
	cout << "P1 Fine " << fixed << setprecision(2) << p1Fine << endl;


	cout << lib.checkOutBook("p2", "b1") << endl;
	cout << lib.requestBook("p1", "b1");
	cin.ignore();
	cin.get();
	return 0;
}