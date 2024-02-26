//simpleCalculator.cpp

/*
Idea: use if statements to choose which type of equation you want to solve (mult, div, etc.)
Have the user select from 4 different choices. (1 Addition, 2 Subtraction, 3 Multiplication, 4 Division.)
Take user input and print it along with the arithmetic operators for whatever type of problem the user is trying to solve.



*/

#include <iostream>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4 

int main() {

int selection;
int firstInput;
int secondInput;
char restart;

do {
    restart = 'N';

    std::cout << "Select your operation." << std::endl;
    std::cout << "1) Addition" << std::endl;
    std::cout << "2) Subtraction" << std::endl;
    std::cout << "3) Multiplication" << std::endl;
    std::cout << "4) Division" << std::endl;
    std::cin >> selection;

    if (selection == ADDITION) {
        std::cout << "You chose ADDITION." << std::endl;
        std::cout << "Enter your first number." << std::endl;
        std::cin >> firstInput;
        std::cout << "Enter your second number." << std::endl;
        std::cin >> secondInput;
        std::cout << "Your answer is: " << firstInput + secondInput << std::endl;
    }
    else if (selection == SUBTRACTION) {
        std::cout << "You chose SUBTRACTION." << std::endl;
        std::cout << "Enter your first number." << std::endl;
        std::cin >> firstInput;
        std::cout << "Enter your second number." << std::endl;
        std::cin >> secondInput;
        std::cout << "Your answer is: " << firstInput - secondInput << std::endl;
    }
    else if (selection == MULTIPLICATION) {
        std::cout << "You chose MULTIPLICATION." << std::endl;
        std::cout << "Enter your first number." << std::endl;
        std::cin >> firstInput;
        std::cout << "Enter your second number." << std::endl;
        std::cin >> secondInput;
        std::cout << "Your answer is: " << firstInput * secondInput << std::endl;
    }
    else if (selection == DIVISION) {
        std::cout << "You chose DIVISION" << std::endl;
        std::cout << "Enter your first number." << std::endl;
        std::cin >> firstInput;
        std::cout << "Enter your second number." << std::endl;
        std::cin >> secondInput;
        std::cout << "Your answer is: " << firstInput / secondInput << std::endl;
    }
    else {
        std::cout << "Invalid selection. Please use the numbers 1-4 for your selection." << std::endl;
        }

    std::cout << "Do you want to restart? (Y/N)" << std::endl;
    std::cin >> restart;
} while (restart == 'Y' || restart == 'y');
    
    return 0;
}
