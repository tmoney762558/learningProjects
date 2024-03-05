#include <iostream>
#include <cmath>
#include <ctime>

std::string mainAttribute;
int selection;
int dice1 = 0;
int dice2 = 0;
int health;
int healthLoss;


int main() {
    std::cout << "Welcome to Baldur's Gate!" << '\n' << '\n';
    std::cout << "Please select your character's class: " << '\n';
    std::cout << "1) Barbarian" << '\n' << "2) Rogue" << '\n' << "3) Wizard" << '\n';
    std::cin >> selection;
    
    switch(selection) {
        case 1:
        std::cout << "You chose Barbarian!" << '\n' << '\n';
        mainAttribute = "Strength";
        health = 58;
        break;
        case 2:
        std::cout << "You chose Rogue!" << '\n' << '\n';
        mainAttribute = "Dexterity";
        health = 38;
        break;
        case 3:
        std::cout << "You chose Wizard!" << '\n' << '\n';
        mainAttribute = "Wisdom";
        health = 38;
        break;
    }
    std::cout << "You wake up inside of an illithid pod. You must escape." << '\n';
    std::cout << "1) (Strength) Force the pod open." << '\n';
    std::cout << "2) (Dexterity) Attempt to open skillfully cut the pod open with your knife." << '\n';
    std::cout << "3) (Wisdom) Use the tadpole within your head to open the pod." << '\n';
    std::cin >> selection;

    srand(time(NULL));

    if(selection == 1) {
        if(mainAttribute == "Strength") {
            dice1 = (rand() % 20 + 1);
            dice2 = (rand() % 20 + 1);
            dice1 += 3;
            dice2 += 3;
            std::cout << "You roll with advantage!" << '\n';
            std::cout << "Dice 1: " << dice1 << '\n';
            std::cout << "Dice 2: " << dice2 << '\n';
        }
        else if(mainAttribute == "Dexterity") {
            dice1 = (rand() % 20 + 1);
            std::cout << "Dice 1: " << dice1 << '\n';
        }
        else if(mainAttribute == "Wisdom") {
            dice1 = (rand() % 20 + 1);
            dice1 -= 3;
            std::cout << "You roll with disadvantage!" << '\n';
            std::cout << "Dice 1: " << dice1 << '\n';
        }
            if(dice1 >= 22 || dice2 >= 22 || dice1 == 23 || dice2 == 23) {
                std::cout << "Strength check successful." << '\n';
                std::cout << "You successfully pry the pod open." << '\n';
            }
            else {
                healthLoss = (rand() % 38 + 1);
                health -= healthLoss;
                std::cout << "Strength check failed." << '\n';
                std::cout << "The pod exploded. You lose " << healthLoss << " health." << '\n';
                std::cout << "Your current health is " << health << "." << '\n';
            }
    }
    else if(selection == 2) {
        if(mainAttribute == "Dexterity") {
            dice1 = (rand() % 20 + 1);
            dice2 = (rand() % 20 + 1);
            dice1 += 3;
            dice2 += 3;
            std::cout << "You roll with advantage!" << '\n';
            std::cout << "Dice 1: " << dice1 << '\n';
            std::cout << "Dice 2: " << dice2 << '\n';
        }
        else if(mainAttribute == "Strength") {
            dice1 = (rand() % 20 + 1);
            std::cout << "Dice 1: " << dice1 << '\n';
        }
        else if(mainAttribute == "Wisdom") {
            dice1 = (rand() % 20 + 1);
            std::cout << "Dice 1: " << dice1 << '\n';
        }
        if(dice1 >= 18 || dice2 >= 18 || dice1 == 20 || dice2 == 20) {
            std::cout << "Dexterity check successful." << '\n';
            std::cout << "You skillfully cut your way out of the pod." << '\n';
        }
        else {
            healthLoss = (rand() % 8 + 1);
            health -= healthLoss;
            std::cout << "Dexterity check failed." << '\n';
            std::cout << "You clumsily fall out of your pod. You lose " << healthLoss << " health." << '\n';
            std::cout << "Your current health is " << health << "." << '\n';
        }
    }
    else if(selection == 3) {
        if(mainAttribute == "Wisdom") {
            dice1 = (rand() % 20 + 1);
            dice2 = (rand() % 20 + 1);
            dice1 += 3;
            dice2 += 3;
            std::cout << "You roll with advantage!" << '\n';
            std::cout << "Dice 1: " << dice1 << '\n';
            std::cout << "Dice 2: " << dice2 << '\n';
        }
        if(mainAttribute == "Dexterity") {
            dice1 = (rand() % 20 + 1);
            std::cout << "Dice 1: " << dice2 << '\n';
        }
        if(mainAttribute == "Strength") {
            dice1 = (rand() % 20 + 1);
            dice1 -= 3;
            std::cout << "You roll with disadvantage!" << '\n';
            std::cout << "Dice 1: " << dice1 << '\n';
        }
        if(dice1 >= 21 || dice2 >= 21 || dice1 == 20 || dice2 == 20) {
            std::cout << "Wisdom check successful." << '\n';
            std::cout << "You use your illithid tadpole to open to pod." << '\n';
        }
        else {
            healthLoss = (rand() % 8 + 1);
            health -= healthLoss;
            std::cout << "Wisdom check failed." << '\n';
            std::cout << "You successfuly open the pod, but your tadpole retaliates. You lose "<< healthLoss << " health." << '\n';
            std::cout << "Your current health is " << health << "." << '\n';
        }
    }
    else {
        std::cout << "Invalid selection." << '\n';
    }

    return 0;
}
