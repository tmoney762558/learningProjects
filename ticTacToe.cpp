#include <iostream>
#include <ctime>

void drawBoard(char *spaces);
void playerMove(char *spaces, char player, char computer);
void computerMove(char *spaces, char computer, char player);
bool checkWinner(char *spaces, char player, char computer, bool &gameOver);
void checkDraw(char *spaces, bool &draw, bool gameOver);

int main() {
    std::cout << "Welcome to Tic-Tac-Toe!\n";
    bool draw;
    bool gameOver;
    do {
        draw = false;
        gameOver = false;
        srand(time(NULL));
        char player = 'X';
        char computer = 'O';
        char spaces[9] = {'1', '2', '3', '4', '5', '6', '7', '8','9'};
 
        drawBoard(spaces);
        do {
            if (gameOver == false) {
            playerMove(spaces, player, computer);
            checkWinner(spaces, player, computer, gameOver);
            checkDraw(spaces, draw, gameOver);
            }
            if (gameOver == false && draw == false) {
            computerMove(spaces, computer, player);
            checkWinner(spaces, player, computer, gameOver);
            checkDraw(spaces, draw, gameOver);
            }
        } while (gameOver == false && draw == false);
    } while (draw == true && gameOver == false);

    return 0;
}

void drawBoard(char *spaces) {
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |" << "  " << spaces[2] << "  " << '\n';
    std::cout << "_____" << "|" << "_____" << "|" << "_____" << '\n';
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |" << "  " << spaces[5] << "  " << '\n';
    std::cout << "_____" << "|" << "_____" << "|" << "_____" << '\n';
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |" << "  " << spaces[8] << "  " << '\n';
    std::cout << "     " << "|" << "     " << "|" << "     " << '\n';
}
void playerMove(char *spaces, char player, char computer) {
    int playerSelection;
    bool validMove = false;
    std::cout << "What square do you want to place X into?\n";
    do {
        std::cin >> playerSelection;
            if (spaces[playerSelection - 1] == computer || spaces[playerSelection - 1] == player) {
                std::cout << "This square is already occupied. Choose another square.\n";
            }
        else {
            spaces[playerSelection - 1] = player;
            drawBoard(spaces);
            validMove = true;
        }
    } while (validMove == false);
}
void computerMove(char *spaces, char computer, char player) {
    srand(time(NULL));
    bool validMove = false;
    int repeatCheck = 0;
    std::cout << "It is the computers turn.\n";
    do {
    int computerSelection = (rand() % 8);
        if (spaces[computerSelection] == computer || spaces[computerSelection] == player) {
            repeatCheck++;
        }
        else {
            spaces[computerSelection] = computer;
            drawBoard(spaces);
            validMove = true;
        }
    } while (validMove == false);

}
bool checkWinner(char *spaces, char player, char computer, bool &gameOver) {
    if(spaces[0] == 'X' && spaces[1] == 'X' && spaces[2] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[0] == 'O' && spaces[1] == 'O' && spaces[2] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[3]== 'X' && spaces[4] == 'X' && spaces[5] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[3] == 'O' && spaces[4] == 'O' && spaces[5] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[6] == 'X' && spaces[7] == 'X' && spaces[8] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[6] == 'O' && spaces[7] == 'O' && spaces[8] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[0] == 'X' && spaces[4] == 'X' && spaces[8] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[0] == 'O' && spaces[4] == 'O' && spaces[8] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[2] == 'X' && spaces[4] == 'X' && spaces[6] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[2] == 'O' && spaces[4] == 'O' && spaces[6] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[0] == 'X' && spaces[3] == 'X' && spaces[6] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[0] == 'O' && spaces[3] == 'O' && spaces[6] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[1] == 'X' && spaces[4] == 'X' && spaces[7] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[1] == 'O' && spaces[4] == 'O' && spaces[7] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }
    else if(spaces[2] == 'X' && spaces[5] == 'X' && spaces[8] == 'X') {
        std::cout << "The player wins!\n";
        gameOver = true;
    }
    else if(spaces[2] == 'O' && spaces[5] == 'O' && spaces[8] == 'O') {
        std::cout << "The computer wins!\n";
        gameOver = true;
    }

return 0;
}
void checkDraw(char *spaces, bool &draw, bool gameOver) {
    if (spaces[0] != '1' && spaces[1] != '2' && spaces[2] != '3' && spaces[3] != '4' && spaces[4] != '5' && spaces[5] != '6' && spaces[6] != '7' && spaces[7] != '8' && spaces[8] != '9' && gameOver == false) {
        std::cout << "DRAW. Play again!\n";
        draw = true;
    }
    else {
        draw = false;
    }
}
