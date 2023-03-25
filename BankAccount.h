#include <bits/stdc++.h>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
 class Client;
using namespace std;
class BankAccount {

private:
	string accountID;
	static int accountCount;
	string accountType;
	double balance;
        Client* pClient;

public:
	BankAccount();

        virtual ~BankAccount();

	BankAccount(double amount);

	void setID(string newID);

	void setBalance(double amount);

	void setType(string newType);

	string getType();

	double getBalance();

	string getID();

	virtual void displayData();

	virtual void withdraw(double amount);

	virtual void deposit(double amount);

	Client* getClient();

        void setClient(Client *clt);
};

#endif
