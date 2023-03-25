#include "SavingsBankAccount.h"

SavingsBankAccount::SavingsBankAccount() {}

SavingsBankAccount::SavingsBankAccount(double amount, double minBalance) {
    if (minBalance >= 1000 ) minimumBalance = minBalance;
    else {
        cout <<"Minimum balance must be equal or greater than 1000 LE.\n Please enter new minimum balance: ";
        cin >> minBalance;
        minimumBalance = minBalance;
    }
    if ( amount >= minimumBalance) {
        setBalance(amount);
    }
    else {
        cout <<"Insufficient amount, it must be grater than or equal minimum balance " << minimumBalance <<"\nPlease enter the new balance: ";
        cin >> amount;
        setBalance(amount);
    }
}

double SavingsBankAccount::getMinBalance() {
    return  minimumBalance;
}

void SavingsBankAccount::setMinBalance(double minAmount) {
    minimumBalance = minAmount;
}

void SavingsBankAccount::displayData() {
    BankAccount::displayData();
    cout <<"Account minimum balance: " << minimumBalance <<endl;
}

void SavingsBankAccount::withdraw(double amount) {
    while ( getBalance() - amount < minimumBalance ) {
        cout <<"Insufficient amount to be withdrawn, The maximum balance could be withdrawn = " << getBalance() - minimumBalance << ".\nPlease enter your new value: ";
        cin >> amount;
    }
    setBalance( getBalance() - amount);
}

void SavingsBankAccount::deposit(double amount) {
    while ( amount < 100) {
        cout <<"Insufficient deposit amount, Please enter a value greater than or equal to 100 LE. \n>  ";
        cin >> amount;
    }
    setBalance(getBalance() + amount);
}
