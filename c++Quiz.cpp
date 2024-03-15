#include <iostream>

int main() {
    std::string questions[4] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the earth flat?"};
    //The columns correspond to the amount of multiple choice answers we have.
    //Here we will use the standard A, B, C, and D which would be 4.

    std::string choices[][4] = {{"(A) 1974", "(B) 1979", "(C) 1976", "(D) 1972"},
                                           {"(A) Bjarne Stroustrup", "(B) Kendrick Nelson", "(C) Thomas Edison", "(D) Matt Barnes"},
                                           {"(A) C#", "(B) C", "(C) C+", "(D) C with Classes"},
                                           {"(A) Yes", "(B) No"}};

    char answerKey[] = {'B', 'A', 'D', 'B'};

    std::cout << "Here are your quiz questions! \n";    

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++) {
        std::cout << questions[i] << '\n';
    
        for(int j = 0; j < sizeof(choices[i])/sizeof(choices[i][j]); j++) {
            std::cout << choices[i][j] << '\n';
        }
    }

    char selection;
    int score = 0;

    for(int i = 0; i < sizeof(questions)/sizeof(questions[0]); i++) {

        std::cout << "Enter your answer for #" << i + 1 << ": \n";
        std::cin >> selection;
        if(selection == answerKey[i]) {
            std::cout << "Question #" << i + 1 << " is correct!\n";
            score++;
        }
        else {
            std::cout << "Question #" << i + 1 << " is incorrect!\n";
        }
    }
    std::cout << "Your score was " << score << "/" << sizeof(questions)/sizeof(questions[0]) << '\n';
std::cout << "You got " << 100 / (sizeof(questions)/sizeof(questions[0])) * score << " percent correct. \n";
    return 0;
}
