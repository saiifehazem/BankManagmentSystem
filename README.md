# **BankManagmentSystem**

BankManagment is a console-based application for managing bank accounts and clients. It is written in C++ and uses object-oriented programming principles. The application provides the bank officer with the ability to create bank accounts for clients, list available accounts, display account details, withdraw money, and deposit money.

## **How to use**

1- Clone this repository.

2- Compile the source code files.

3- Run the BankingApplication class.

4- Follow the instructions displayed on the console to create bank accounts, list available bank accounts, display account details, withdraw money, and deposit money.

5- You will be presented the enu as the follows

![image](https://user-images.githubusercontent.com/92641962/227727424-69bb47d7-13d4-4e73-a228-8e13c66c4bf1.png)


## **Functionalities**

+ **Creating a New Account**

To create a new account, select option 1 from the main menu. You will be prompted to enter the client's name, address, and phone number. Once you have entered this information, you will be asked to select the account type: Basic or Savings. If you select Basic, you will be prompted to enter the initial balance for the account. If you select Savings, you will be prompted to enter both the initial balance and the minimum balance for the account.

+ **Listing Clients and Accounts**

To list all clients and their associated accounts, select option 2 from the main menu. This will display a table with the following information for each client: client ID, name, address, and phone number. For each client, the table will also display a list of their associated accounts, including the account ID, balance, and account type.

+ **Withdrawing Money**

To withdraw money from an account, select option 3 from the main menu. You will be prompted to enter the account ID and the amount to withdraw. If the account has sufficient funds, the withdrawal will be processed and the new balance will be displayed.

+ **Depositing Money**

To deposit money into an account, select option 4 from the main menu. You will be prompted to enter the account ID and the amount to deposit. If the deposit amount is greater than or equal to 100, the deposit will be processed and the new balance will be displayed.

## **Application Overview**

There are two types of bank accounts in this system:

1- **Basic Bank Account**

This type of account holds the account ID and balance. It allows the user to withdraw and deposit money.

2- **Savings Bank Account**

This type of account extends the basic bank account and has extra data fields and operations. It requires the user to keep a minimum amount of money in the account and make deposits that are not less than 100 at a time.

### **Classes**

+ **BasicBankAccount**

1- This class holds the following data:

    + account ID
    + balance


2- The following methods apply to this class:

    + Constructor: There are 2 constructors. The first sets the balance to a given value. The second is a no-argument constructor and it sets the balance to 0.
    + Setters and getters: These methods allow accessing the private data fields.
    + withdraw: It withdraws an amount of money from the account if the balance is sufficient.
    + deposit: It deposits an amount of money in the account.


+ **SavingsBankAccount**

This class extends the BasicBankAccount class and has the following additional data field:

    + minimumBalance: This minimum balance takes a default value of 1000 L.E.
It has the following methods plus those inherited from the parent class:

    + Constructor: The constructor sets the value of the initial balance and the minimum balance. The initial balance should be >= min balance.
    + Setters and getters: These methods allow accessing the private data fields.
    withdraw: It overrides the method withdraw to allow withdrawing money but not below the minimum balance.
    + deposit: It deposits an amount of money in the account but only if the amount is >= 100 LE.
+ **Client**

This class holds the basic information of a client like his name, address, and phone number. It holds a pointer to his bank account. An account also points to its owner.

+ **BankingApplication**
This class is the main class that runs the application. It displays the main menu and accepts the user's choice. It maintains a list of accounts and clients. It allows the user to perform operations on a bank account.
