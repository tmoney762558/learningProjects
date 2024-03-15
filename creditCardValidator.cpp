#include <iostream>

int getDigit(const int number);
int sumOfOdd(const std::string cardNumber);
int everySecondDigit(const std::string cardNumber);

//Double every second digit from right to left. everySecondDigit()
//If doubled number is 2 digits, split them. getDegit
//Add all single digits from step 1.
//Add all odd numbered digits from right to left.
//Sum results from steps 2 & 3.
//If step 4 is divisible by 10 # is valid.

int main() {

std::string cardNumber;
int result = 0;
int number;

std::cout << "************************************\n";
std::cout << "Welcome to the Credit Card Validator!\n";
std::cout << "Enter your credit card number.\n";
std::cin >> cardNumber;

result = everySecondDigit(cardNumber) + sumOfOdd(cardNumber);

if(result % 10 == 0) {
    std::cout << "Card number is valid.\n";
}
else {
    std::cout << "Card number is invalid\n";
}
std::cout << "************************************\n";


    return 0;
}

int getDigit(const int number) {
    return number % 10 + (number / 10 % 10);
}
int sumOfOdd(const std::string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() - 1 ; i >= 0; i-=2) {
        sum += cardNumber[i] - '0';
    }
    return sum;
}
int everySecondDigit(const std::string cardNumber) {
    int sum = 0;

    for(int i = cardNumber.size() - 2 ; i >= 0; i-=2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
