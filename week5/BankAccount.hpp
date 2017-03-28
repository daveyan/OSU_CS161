/************************************
 * Author: David Yan
 * Date 10/28/15
 * Description : Header file to the class "BankAccount"
 * ***********************************/
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>

class BankAccount
{
private: 
	std::string customerName;
	std::string customerID;
	double customerBalance;
public:
	BankAccount(std::string, std::string, double);
	BankAccount();
	std::string getCustomerName();
	std::string getCustomerID();
	double getCustomerBalance();
	double withdraw(double);
	double deposit(double);
};

#endif

