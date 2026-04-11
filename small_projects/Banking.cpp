#include <iostream>

using std::cin;
using std::cout;

double CurrentBalance = 0.0; 

void showBalance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main() {
    int choice = 0;
    
    cout << "\n\nWelcome to the bank\n\n";
    
    do {
        cout << "\nWhat do you want to do?\n"
             << "1) Check your balance\n"
             << "2) Deposit money\n"
             << "3) Withdraw money\n"
             << "4) Exit\n";
        cin >> choice;
        
        switch(choice) {
            case 1:
                showBalance(CurrentBalance);
                break;
            case 2:
                CurrentBalance = deposit(CurrentBalance);  
                break;
            case 3:
                CurrentBalance = withdraw(CurrentBalance); 
                break;
            case 4:
                cout << "\nThanks for using the bank.\n";
                break;
            default:
                cout << "\nEnter valid choice\n";
        }
    } while(choice != 4);
    
    return 0;
}

void showBalance(double balance) {
    cout << "\nYour current balance is $" << balance << '\n';
}

double deposit(double balance) {
    double depositAmount = 0.0;

    cout << "\nHow much money do you want to deposit? $";
    cin >> depositAmount;
    
    if (depositAmount > 0) {
        balance += depositAmount;
        cout << "\nDeposit successful. New balance: $" << balance << '\n';
    } else {
        cout << "\nInvalid deposit amount.\n";
    }
    return balance;
}

double withdraw(double balance) {
    double withdrawAmount = 0.0;

    cout << "\nHow much money do you want to withdraw? $";
    cin >> withdrawAmount;
    
    if (withdrawAmount > 0 && withdrawAmount <= balance) {
        balance -= withdrawAmount;
        cout << "\n$" << withdrawAmount << " has been withdrawn. New balance: $" << balance << '\n';
    } else if (withdrawAmount > balance) {
        cout << "\nInsufficient funds!\n";
    } else {
        cout << "\nInvalid withdrawal amount.\n";
    }
    return balance;
}