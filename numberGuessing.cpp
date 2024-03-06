#include <iostream>
#include <ctime>

int randNum;
int guessesCount;
int guess;
bool gameOver;
char replay;

int main() {
    
        std::cout << "Welcome to the Random Number Guessing Game!\n";
        std::cout << "Guess a number 1-10!\n";
        std::cin >> guess;

        srand(time(NULL));
        randNum = (rand() % 10) + 1;

        gameOver = false;
        replay = 'Y';

    do {
        

        if(guess == randNum) {
        std::cout << "You guessed correctly!\n";
        gameOver = true;
        }
        else if(guess != randNum) {
        std::cout << "You guessed incorrectly! Try again.\n";
        }
    } while(gameOver == false);
    return 0;
}
