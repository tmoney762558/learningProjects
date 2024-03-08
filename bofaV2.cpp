#include <iostream>

void checkBalance(double balance);
void depositMoney(double& balance);
void withdrawMoney(double& balance);
void endProgram(bool& exit);

int main() {
    double balance = 0.0;
    int selection;
    bool exit = false;

do {
    std::cout << "Welcome to Bank of America!\n" << '\n';
    std::cout << "How can we help you today?\n";
    std::cout << "1) Check Balance\n";
    std::cout << "2) Deposit Money\n";
    std::cout << "3) Withdraw Money\n";
    std::cout << "4) Exit\n";
    
    std::cin >> selection;

    switch(selection) {
        case 1:
        checkBalance(balance);
        break;
    
        case 2:
        depositMoney(balance);
        break;

        case 3:
        withdrawMoney(balance);
        break;

        case 4:
        endProgram(exit);
        break;

        default:
        std::cout << "Invalid selection.\n";
        break;
    }
} while(exit == false);
    return 0;
}

void checkBalance(double balance) {
    std::cout << "Check Balance\n";
    std::cout << "Your balance is: $" << balance << ".\n";
}
void depositMoney(double& balance) {
    double deposit;
    
    std::cout << "Deposit Money\n";
    std::cout << "How much money would you like to deposit?\n";
    std::cin >> deposit;
    balance += deposit;
        if(deposit > 0) {
            std::cout << "You deposited $" << deposit << ".\n";
            std::cout << "Your new balance is $" << balance << ".\n";
        }
        else {
            std::cout << "Invalid value. Deposits cannot be negative\n";
        }
}
void withdrawMoney(double& balance) {
    double withdraw;
    
    std::cout << "Withdraw Money\n";
    std::cout << "How much money would you like to withdraw?\n";
    std::cin >> withdraw;
    if(withdraw > balance) {
        std::cout << "Invalid value. You only have $" << balance << ".\n";
    }
    else if(withdraw < 0) {
        std::cout << "Invalid value. Withdrawals cannot be negative.\n";
    }
    else {
        balance -= withdraw;
        std::cout << "You withdrew $" << withdraw << ".\n";
        std::cout << "Your new balance is $" << balance << ".\n";
    }
}
void endProgram(bool& exit) {
    std::cout << "Thank you for visiting Bank of America.\n";
    exit = true;
}
