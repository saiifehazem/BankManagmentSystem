#include "Client.h"
#include "BankAccount.h"

Client::Client() {}

Client::Client(string name, int phone, string  address) {
    userName = name;
    userPhone = phone;
    userAddress = address;
}

void Client::setName(string name) {
    userName = name;
}

void Client::setPhone(int num) {
    userPhone = num;
}

void Client::setAddress(string address) {
    userAddress = address;
}

void Client::displayData() {
	// TODO - implement Client::displayData
	throw "Not yet implemented";
}

string Client::getName() {
	// TODO - implement Client::getName
	throw "Not yet implemented";
}

int Client::getPhone() {
    return userPhone;
}

string Client::getAddress() {
    return userAddress;
}

void Client::setAccount(BankAccount *bnk) {
    pBankAccount = bnk;
}

BankAccount *Client::getBankAccount() {
    return pBankAccount;
}

Client::~Client() {
    if (pBankAccount->getClient() != nullptr) {
        delete pBankAccount->getClient();
        pBankAccount->setClient(nullptr);
    }
    delete pBankAccount;
}
