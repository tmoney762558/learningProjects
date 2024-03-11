//rockPaperScissors.cpp

#include <iostream>
#include <ctime>

void playerRock(int playerThrow, int aiThrow, char& restart);
void playerPaper(int playerThrow, int aiThrow, char& restart);
void playerScissors(int playerThrow, int aiThrow, char& restart);

int main() {
    int playerThrow;
    int aiThrow;
    char restart = 'Y';
    srand(time(NULL));

    std::cout << "*******************************\n";
    std::cout << "Welcome to Rock Paper Scissors!\n";
    do {
        std::cout << "Select your throw!\n";
        std::cout << "1) ROCK\n";
        std::cout << "2) PAPER\n";
        std::cout << "3) SCISSORS\n";
        std::cin >> playerThrow;
        std::cin.clear();
        fflush(stdin);
        aiThrow = (rand() % 3 + 1);

    switch(playerThrow) {
        case 1:
            playerRock(playerThrow, aiThrow, restart);
            break;
        case 2:
            playerPaper(playerThrow, aiThrow, restart);
            break;
        case 3:
            playerScissors(playerThrow, aiThrow, restart);
            break;
        default:
            std::cout << "Invalid selection.\n";
            break;
    }
    }while(restart == 'Y' || restart == 'y');
    
    std::cout << "Thank you for playing!\n";
    std::cout << "*******************************\n";

    return 0;
}
void playerRock(int playerThrow, int aiThrow, char& restart) {
    if(playerThrow == aiThrow) {
        std::cout << "You chose ROCK!\n";
        std::cout << "The computer chose ROCK!\n";
        std::cout << "DRAW. Play again!\n";
    }
    else if(aiThrow == 2){
        std::cout << "You chose ROCK!\n";
        std::cout << "The computer chose PAPER!\n";
        std::cout << "YOU LOSE!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
    else {
        std::cout << "You chose ROCK!\n";
        std::cout << "The computer chose SCISSORS!\n";
        std::cout << "YOU WIN!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
}
void playerPaper(int playerThrow, int aiThrow, char& restart) {
    if(playerThrow == aiThrow) {
        std::cout << "You chose PAPER!\n";
        std::cout << "The computer chose PAPER!\n";
        std::cout << "DRAW. Play again!\n";
    }
    else if(aiThrow == 3){
        std::cout << "You chose PAPER!\n";
        std::cout << "The computer chose SCISSORS!\n";
        std::cout << "YOU LOSE!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
    else {
        std::cout << "You chose PAPER!\n";
        std::cout << "The computer chose ROCK!\n";
        std::cout << "YOU WIN!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
}
void playerScissors(int playerThrow, int aiThrow, char& restart) {
    if(playerThrow == aiThrow) {
        std::cout << "You chose SCISSORS!\n";
        std::cout << "The computer chose SCISSORS!\n";
        std::cout << "DRAW. Play again!\n";
    }
    else if(aiThrow == 1){
        std::cout << "You chose SCISSORS!\n";
        std::cout << "The computer chose ROCK!\n";
        std::cout << "YOU LOSE!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
    else {
        std::cout << "You chose SCISSORS!\n";
        std::cout << "The computer chose PAPER!\n";
        std::cout << "YOU WIN!\n";
        std::cout << "Would you like to play again? (Y/N)\n";
        std::cin >> restart;
    }
}
