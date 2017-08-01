//Source file for Account.h

#include<iostream>
#include "Account.h"

using namespace std;

account::account()
{
	balance = 0;
	number = 0;
}

int account::getAccountNo()
{
	return number;
}
void account::setAccountNo(int n)
{
	number = n;
}
void account::read()
{
	cout << "Please enter your bank account number!!! \n";
	cin >> number;

}
void account::deposit(double d)
{
	if (d <= 0)
		cout << "Please enter a valid amount to deposit!!!\n";
	balance += d;

}
void account::withdraw(double w)
{
	if (w > balance)
		cout << "Sorry!!! You do not have enough balance\n"
		"Please enter a different amount!!!\n";
	else
		balance -= w;

}

void account::transfer(double amount)
{
	if (amount > balance)
	{
		cout << "Sorry!!! You do not have enough balance\n"
			"Please enter a different amount!!!\n";
	}
	else
		balance -= amount;
}
void account::transferAdd(int x, double income)
{}
void account::print() const
{
	cout << "Account Number: " << number << "\n"

		"Current balance: $" << balance << "\n------------------------\n";

}

void account::printMainMenu() const
{
	cout << "Press 1 for balance \n";
	cout << "Press 2 for transaction\n";
	cout << "Press 0 to exit \n";
}
void account::printTransactionMenu() const
{
	cout << "Press 3 to deposit money!!! \n";
	cout << "Press 4 to withdraw money!!!\n";
	cout << "Press 5 to transfer money!!!\n";
	cout << "Press 9 to exit to the main menu!!!\n";
}
