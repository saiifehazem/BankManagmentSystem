#include <bits/stdc++.h>
#ifndef CLIENT_H
#define CLIENT_H
using namespace std;
class BankAccount;
class Client {

private:
	string userName;
	int userPhone;
	string userAddress;
	BankAccount* pBankAccount;

public:
	Client();

	Client(string name, int phone, string  address);

	void ~Client();

	void setName(string name);

	void setPhone(int num);

	void setAddress(string address);

	void displayData();

	string getName();

	int getPhone();

	string getAddress();

	BankAccount* getBankAccount();

        void setAccount(BankAccount *bnk);
};

#endif
