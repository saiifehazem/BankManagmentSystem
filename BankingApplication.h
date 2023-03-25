#ifndef BANKINGAPPLICATION_H
#define BANKINGAPPLICATION_H
using namespace std;
class Client;
class BankingApplication {


public:
	BankingApplication();

	map<string,Client*> Data;

	void displayMenu();
};

#endif
