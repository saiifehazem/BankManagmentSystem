#include <bits/stdc++.h>
#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H
#include "BankAccount.h"
class SavingsBankAccount : BankAccount {
private:
double minimumBalance;

public:

	SavingsBankAccount();

	SavingsBankAccount(double amount, double minBalance = 1000);

	double getMinBalance();

	void setMinBalance(double minAmount);

	void displayData();

	void withdraw(double amount);

	void deposit(double amount);
};

#endif
