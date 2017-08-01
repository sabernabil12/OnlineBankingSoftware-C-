//Header File

#ifndef acnt
#define acnt

class account
{
public:
	account();
	account(double b, int n);
	int getAccountNo();
	void setAccountNo(int n);
	void read();
	void deposit(double d);
	void withdraw(double w);
	void transfer(double amount);
	void transferAdd(int x, double income);
	void print() const;
	void printMainMenu() const;
	void printTransactionMenu() const;
private:
	double balance;
	int number;
	double d;
	double w;
	double amount;
};

#endif
