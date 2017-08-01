//main program

#include<iostream>
#include<string>
#include "Account.h"

using namespace std;


int main()
{
	string c;
	int x = 1;
	bool next = true;

	while (next)
	{
		account s;
		s.read();
		s.print();
		int m =1;
		while (m == 1)
		{
			s.printMainMenu();

			int r;
			cin >> r;

			switch (r)
			{
			case 1:
				s.print(); break;
			case 2:
				s.printTransactionMenu(); 
				
				cin >> r;
				switch (r)
				{
				case 3:
					cout << "Please enter the amount you want to deposit!!!\n";
					double d;
					cin >> d;
					s.deposit(d);
					s.print(); 
					cout << "Deposit completed successfully!!!\n"; break;
				case 4:
					cout << "Please enter the amount you want to withdraw!!!\n";
					double w;
					cin >> w;
					s.withdraw(w);
					s.print(); 
					cout << "Withdraw completed successfully!!!\n"; break;
				case 5:
					cout << "Please enter the amount you want to transfer!!!\n";
					double amount;
					cin >> amount;
					s.transfer(amount);
					s.print(); 
					cout << "Transfer completed successfully!!!\n"; break;

				case 9:
					s.print(); break;

				default:
					cout << "Invalid selection!!! \n"; break;
				}
				
				
				
				break;
			case 0:
				cout << "You are going to exit!!! \n"
					"Press 'y'to continue, and 'n' for no\n";
				m = 0;
				cin >> c;
				if (c != "y")
					next = false;
				break;
			
			default:
				cout << "Invalid selection!!! \n"; break;
			}
		}
	}


	return 0;
}
