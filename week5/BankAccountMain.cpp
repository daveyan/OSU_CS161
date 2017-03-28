// BankAccount Class.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "BankAccount.hpp"
#include <string>
#include <iostream>

using namespace std;

/*class BankAccount
{
private:
	string customerName;
	string customerID;
	double customerBalance;
public:
	BankAccount(string, string, double);
	string getName();
	string getID();
	double getBal();
	void deposit(double);
	void withdraw(double);

};

BankAccount::BankAccount(string name = "David", string id = "1111", double bal = 1000)
{
	customerName = name;
	customerID = id;
	customerBalance = bal;
}

string BankAccount::getName()
{
	return customerName;


string BankAccount::getID()
{
	return customerID;
}

double BankAccount::getBal()
{
	return customerBalance;
}

void BankAccount::deposit(double amount)
{
	BankAccount::customerBalance += amount;
}

void BankAccount::withdraw(double amount)
{
	BankAccount::customerBalance -= amount;
}
*/
int main()
{
	string a,b;
	double c;

	BankAccount x(a,b,c);
	double amount;
	int loop = 0;
	cout << x.getCustomerName() << endl;
	cout << x.getCustomerID() << endl;
	cout << x.getCustomerBalance() << endl;
	
	while (int loop = 1)
	{
		cout << "deposit amount\n";
		cin >> amount;
		x.deposit(amount);
		cout << "current balance is " << x.getCustomerBalance() << endl;
		cout << "withdraw amount\n";
		cin >> amount;
		x.withdraw(amount);
		cout << "current balance is "<< x.getCustomerBalance() << endl;
	}





	return 0;
}
