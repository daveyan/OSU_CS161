/*****************************************
 * Author: David Yan
 * Date 10/28/15
 * Description: implementation file for the class "BankAccount"
 * ***************************************/


#include "BankAccount.hpp"
#include <string>

/************Constructor***********************************
*we are initializing the data member with this constructor*
***********************************************************/
BankAccount::BankAccount(std::string userName, std::string userId , double userBal)
{
	customerName = userName ="David",
	customerID =  userId = "01101000 01101001",
	customerBalance =  userBal = 2500;
}
/****************Default Cnionstructor**************/
BankAccount::BankAccount()
{}


/************GetName*******************************
* accessor to get the name of the customer
*********************************************************/
std::string BankAccount::getCustomerName()
{
	return customerName;
}

/***********GetID*************************************
* accessor to get the id of the customer
********************************************************/
std::string BankAccount::getCustomerID()
{
	return customerID;
}

/**********GetBalance***********************************
* accessor to get the balance of the customer
******************************************************/
double BankAccount::getCustomerBalance()
{
	return customerBalance;
}

/**********Withdraw****************************
*Subtracts "amount" to the existing balance
*********************************************/
double BankAccount::withdraw(double amount)
{
	BankAccount::customerBalance -= amount;
}

/*********Deposit**************************
*Adds "amount" to the existing balance
*****************************************/
double BankAccount::deposit(double amount)
{
	BankAccount::customerBalance += amount;
}



