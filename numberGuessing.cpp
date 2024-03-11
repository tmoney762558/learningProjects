#include <iostream>
#include <ctime>

int randNum;
int guessesCount;
int guess;
bool correctGuess;
char replay = 'N';

int main() {

        std::cout << "Welcome to the Random Number Guessing Game!" << '\n';
    do {
        std::cout << "Guess a number 1-10!" << '\n';
        
        srand(time(NULL));
        randNum = (rand() % 10) + 1;
        correctGuess = false;
        guessesCount = 1;


        do {
            std::cin >> guess;

            if(guess == randNum) {
                correctGuess = true;
                std::cin.clear();
                fflush(stdin);
                std::cout << "You guessed correctly!\n";
                std::cout << "It took you " << guessesCount << " tries." << '\n';

                std::cout << "Would you like to play again?: (Y/N)" << '\n';
                std::cin >> replay;
                break;
        }
            else {
            std::cout << "You guessed incorrectly! Try again." << '\n';
            std::cin.clear();
            fflush(stdin);
            guessesCount++;
        }
        } while(correctGuess == false);
    } while (replay == 'Y' || replay == 'y');
return 0;
}
