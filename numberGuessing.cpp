#include <iostream>
#include <ctime>

int randNum;
int guessesCount;
int guess;
bool gameOver;
char replay = 'N';

int main() {
    do {
        std::cout << "Welcome to the Random Number Guessing Game!" << '\n';
        std::cout << "Guess a number 1-10!" << '\n';
        
        guess = 0;
        srand(time(NULL));
        randNum = (rand() % 10) + 1;
        gameOver = false;
        guessesCount = 1;

        do {
            std::cin >> guess;

            if(guess == randNum) {
                gameOver = true;
                guess = 0;
                std::cout << "You guessed correctly!\n";
                std::cout << "It took you " << guessesCount << " tries." << '\n';

                std::cout << "Would you like to play again?: (Y/N)" << '\n';
                std::cin >> replay;
                break;
        }
            else {
            std::cout << "You guessed incorrectly! Try again." << '\n';
            guess = 0;
            guessesCount++;
        }
        } while(gameOver == false);
    } while (replay == 'Y' || replay == 'y');
return 0;
}
