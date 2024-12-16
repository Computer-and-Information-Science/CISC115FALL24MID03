//*****************************
//Northampton Community College
//Computer Science 115
//Brendan Cleary
//*****************************

#include <iostream>
#include <string>
#include <limits>  // For std::numeric_limits
using namespace std;

// BankAccount class definition
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Default constructor
    BankAccount() : accountNumber(0), accountHolderName(""), balance(0.0) {}

    // Parameterized constructor
    BankAccount(int accNum, string name, double initialBalance)
        : accountNumber(accNum), accountHolderName(name), balance(initialBalance) {}

    // Accessor methods (getters)
    int getAccountNumber() const { return accountNumber; }
    string getAccountHolderName() const { return accountHolderName; }
    double getBalance() const { return balance; }

    // Mutator methods (setters)
    void setAccountNumber(int accNum) { accountNumber = accNum; }
    void setAccountHolderName(const string& name) { accountHolderName = name; }
    void setBalance(double bal) { balance = bal; }

    // Deposit function
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Withdrawal function
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully.\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount.\n";
        } else {
            cout << "Insufficient balance for the withdrawal.\n";
        }
    }

    // Display account details
    void displayAccountDetails() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

// BankSystem class definition
class BankSystem {
private:
    BankAccount accounts[100];  // Array to store up to 100 accounts
    int accountCount;  // To track the number of accounts

public:
    // Constructor
    BankSystem() : accountCount(0) {}

    // Add a new account
    void addAccount() {
        int accNum;
        string name;
        double initialBalance;

        // Validate account number input
        cout << "Enter account number: ";
        while (!(cin >> accNum)) {
            cout << "Invalid input. Please enter a valid account number (integer): ";
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        }
        cin.ignore();  // Ignore newline character

        cout << "Enter account holder's name: ";
        getline(cin, name);

        cout << "Enter initial deposit amount: ";
        while (!(cin >> initialBalance) || initialBalance < 0) {
            cout << "Invalid deposit amount. Please enter a positive number: ";
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        }

        // Create new account and store it
        BankAccount newAccount(accNum, name, initialBalance);
        accounts[accountCount++] = newAccount;
        cout << "Account created successfully.\n";
    }

    // Perform a transaction (deposit or withdraw)
    void performTransaction() {
        int accNum, option;
        double amount;

        cout << "Enter account number: ";
        while (!(cin >> accNum)) {
            cout << "Invalid input. Please enter a valid account number (integer): ";
            cin.clear();  // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
        }

        // Search for the account
        bool found = false;
        for (int i = 0; i < accountCount; ++i) {
            if (accounts[i].getAccountNumber() == accNum) {
                found = true;
                cout << "1. Deposit\n2. Withdraw\nChoose an option: ";
                cin >> option;

                if (option == 1) {
                    cout << "Enter deposit amount: ";
                    cin >> amount;
                    accounts[i].deposit(amount);
                } else if (option == 2) {
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;
                    accounts[i].withdraw(amount);
                } else {
                    cout << "Invalid option.\n";
                }
                break;
            }
        }

        if (!found) {
            cout << "Account not found.\n";
        }
    }

    // Display all accounts
    void displayAllAccounts() const {
        if (accountCount == 0) {
            cout << "No accounts available.\n";
            return;
        }

        for (int i = 0; i < accountCount; ++i) {
            accounts[i].displayAccountDetails();
            cout << "----------------------------\n";
        }
    }
};

int main() {
    BankSystem system;
    bool running = true;
    int choice;

    while (running) {
        cout << "Menu:\n";
        cout << "1. Add Account\n";
        cout << "2. Perform Transaction\n";
        cout << "3. Display All Accounts\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addAccount();
                break;
            case 2:
                system.performTransaction();
                break;
            case 3:
                system.displayAllAccounts();
                break;
            case 4:
                running = false;
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid option, try again.\n";
        }
    }

    return 0;
}
