//myfirstproject.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

    /*
    rock beats scissors
    scissors beats paper
    paper beats rock
    */

int main() {
    srand((unsigned int) time(NULL));

    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do{
        std::cout << "Select your throw" << std::endl;
        std::cout << "1) Rock" << std::endl;
        std::cout << "2) Paper" << std::endl;
        std::cout << "3) Scissors" << std::endl;
        std::cout << "Selection: ";
        std::cin >> player_throw;

        std::cout << std::endl;

        ai_throw = (rand() % 3) + 1;

        if (ai_throw == ROCK) {
            std::cout << "The computer chose ROCK!" << std::endl;
        }
        else if (ai_throw == PAPER) {
            std::cout << "The computer chose PAPER!" << std::endl;
        }
        else if (ai_throw == SCISSORS) {
            std::cout << "The computer chose SCISSORS" << std::endl;
        }

        draw = false;

        if (player_throw == ai_throw)
        {
            draw = true;
            std::cout << "DRAW! Play again!" << std::endl;
        }
        else if (player_throw == ROCK && ai_throw == PAPER) {
            std::cout << "PAPER beats ROCK! The computer wins!" << std::endl;
        }
        else if(player_throw == ROCK && ai_throw == SCISSORS) {
            std::cout << "ROCK beats SCISSORS! The player wins!" << std::endl;
        }
        else if (player_throw == PAPER && ai_throw == ROCK) {
            std::cout << "PAPER beats ROCK! The player wins!" << std::endl;
        }
        else if (player_throw == PAPER && ai_throw == SCISSORS) {
            std::cout << "SCISSORS beats PAPER! The computer wins!" << std::endl;
        }
        else if (player_throw == SCISSORS && ai_throw == ROCK) {
            std::cout << "ROCK beats SCISSORS! The computer wins!" << std::endl;
        }
        else if (player_throw == SCISSORS &&  ai_throw == PAPER) {
            std::cout << "SCISSORS beats paper! The player wins!" << std::endl;
        }

    }
    while (draw);

    return 0;
}