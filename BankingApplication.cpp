#include "BankingApplication.h"
#include "Client.h"
#include "BankAccount.h"
#include "SavingsBankAccount.h"

BankingApplication::BankingApplication() {
    Data = map<string, Client *>();
}

void BankingApplication::displayMenu() {
    int choice = 0;
    do {
        cout << "Welcome to FCAI Banking Application \n"
                "1. Create a New Account \n"
                "2. List Clients and Accounts \n"
                "3. Withdraw Money \n"
                "4. Deposit Money\n"
                "5. Exit\n"
                "Please Enter Choice =========>  ";
        cin >> choice;
        if (choice == 1) {
            string name, address;
            double type, balance;
            int phone;
            cout << "\nPlease Enter Client Name =========> ";
            cin >> name;
            cout << "\nPlease Enter Client Address =======>";
            cin >> address;
            cout << "\nPlease Enter Client Phone =======> ";
            cin >> phone;
            cout << "\nWhat Type of Account Do You Like? (1) Basic (2) Saving's Type 1 or 2 =========>";
            cin >> type;
            cout << "\nPlease Enter the Starting Balance =========> ";
            cin >> balance;
            auto* B = new Client(name, phone, address);
            if (type == 1) {
                auto* B1 = new BankAccount(balance);
                cout << "\nAn account was created with ID " << B1->getID() << " and Starting Balance " << B1->getBalance()
                     << " L.E. \n\n";
                B->setAccount(B1);
            }

            if (type == 2) {
                auto* B2 = new SavingsBankAccount(balance);
                cout << "\nAn account was created with ID " << B2->getID() << " and Starting Balance " << B2->getBalance()
                     << " L.E. \n\n";
                B->setAccount(B2);
            }
            Data[B->getBankAccount()->getID()] = B;
        }


        else if (choice == 2) {
            for (auto i: Data) {
                i.second->displayData();
                i.second->getBankAccount()->displayData();
            }


        } else if (choice == 3) {
            cout << "Please Enter Account ID (e.g., FCAI-015)";
            string id;
            cin >> id;
            cout << "Client "
                 << Data[id]->getBankAccount()->getID() << '\n'
                 << "Type : "
                 << Data[id]->getBankAccount()->getType() << '\n'
                 << "Balance : "
                 << Data[id]->getBankAccount()->getBalance() << '\n';
            cout<<"Please Enter The Amount to Withdraw. =>  ";
            double amount; cin>>amount;
            Data[id]->getBankAccount()->withdraw(amount);
            cout<<"Thank you\n";
            cout << "Client "
                 << Data[id]->getBankAccount()->getID() << '\n'
                 << "Balance : "
                 << Data[id]->getBankAccount()->getBalance() << "\n\n";


        } else if (choice == 4) {
            cout << "Please Enter Account ID (e.g., FCAI-015) : ";
            string id;
            cin >> id;
            cout << "Client "
                 << Data[id]->getBankAccount()->getID() << '\n'
                 << "Type : "
                 << Data[id]->getBankAccount()->getType() << '\n'
                 << "Balance : "
                 << Data[id]->getBankAccount()->getBalance() << '\n';
            cout<<"Enter amount to deposit : \n";
            double amount; cin>>amount;
            Data[id]->getBankAccount()->deposit(amount);
            cout<< "Balance : "
                << Data[id]->getBankAccount()->getBalance() << "\n\n";
        }
    } while (choice != 5);
}
