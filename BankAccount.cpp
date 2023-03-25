#include "BankAccount.h"
#include "Client.h"

int BankAccount::accountCount = 1;

BankAccount::BankAccount() {
    accountID = "FCAI-" + to_string(accountCount);
    accountCount++;
    accountType = "Basic";
    balance = 0;
    pClient = nullptr;
}

BankAccount::BankAccount(double amount) {
    accountID = string ( "FCAI-" + to_string(accountCount) );
    accountCount++;
    accountType = "Basic";
    balance = amount;
}

void BankAccount::setID(string newID) {
    accountID = newID;
}

void BankAccount::setBalance(double amount) {
	this->balance = amount;
}

void BankAccount::setType(string newType) {
    accountType = newType;
}

string BankAccount::getType() {
    return accountType;
}

double BankAccount::getBalance() {
	return this->balance;
}

string BankAccount::getID() {
    return accountID;
}

void BankAccount::displayData() {
    cout<<"ID : " <<accountID << endl;
    cout<<"Type : " <<accountType << endl;
    cout<< "Balance : " <<balance << endl;
}

void BankAccount::withdraw(double amount) {
    while( amount > balance ) {
        cout << "Sorry insufficient amount, This is more than your balance.\n ";
        cout << "Your balance is: " << balance << ',';
        cout << "Please Enter The Amount to Withdraw. =>  " ;
        cin >> amount;
    }
    setBalance( getBalance()-amount ) ;
}

void BankAccount::deposit(double amount) {
    setBalance(getBalance()+amount);
    cout <<"Successfully Deposited. \n";
}

void BankAccount :: setClient(Client* clt){
    pClient = clt;
}

Client *BankAccount::getClient() {
    return pClient;
}

BankAccount::~BankAccount() {
    delete pClient->getBankAccount();
    pClient->setAccount(nullptr);
    delete pClient;
}
