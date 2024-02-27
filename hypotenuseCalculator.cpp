#include <iostream>
#include <cmath>

int main() {
    
    double legA;
    double legB;
    double hypotenuse;
    char restart;

    do {
    std::cout << "Welcome to the Hypotenuse Calculator!" << std::endl;
    std::cout << "Please enter the value of leg A." << std::endl;
    std::cin >> legA;
    std::cout << "Please enter the value of leg B." << std::endl;
    std::cin >> legB;

    restart = 'N';

    hypotenuse = sqrt(pow(legA, 2) + pow(legB, 2));
    
    std::cout << hypotenuse << std::endl;

    std::cout << "Would you like to restart? (Y/N)" << std::endl;
    std::cin >> restart;
} while(restart == 'Y' || restart == 'y');


    return 0;
}
