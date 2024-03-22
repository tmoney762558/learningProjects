#include <iostream>
#include <ctime>

struct Car {
    std::string model;
    int year;
    std::string color;
    double msrp;
};
std::string generateModel(Car &customCar, double &msrpMultiplier);
int generateYear(Car &customCar, double &msrpMultiplier);
std::string generateColor(Car &customCar, double &msrpMultiplier);

int main() {
    Car customCar;
    double msrpMultiplier;
    
    std::string model = generateModel(customCar, msrpMultiplier);
    int year = generateYear(customCar, msrpMultiplier);
    std::string color = generateColor(customCar, msrpMultiplier);
    customCar.msrp = msrpMultiplier * 14000;
    int msrp = customCar.msrp;

    std::cout << "Your car's model is: " << model << '\n';
    std::cout << "Your car's year is: " << year << '\n';
    std::cout << "Your car's color is: " << color << '\n';
    std::cout << "Your car's MSRP is: " << msrp << '\n';
    
    return 0;
}

std::string generateModel(Car &customCar, double &msrpMultiplier) {
    srand(time(NULL));
    int random = (rand() % 5) + 1;

    switch(random) {
        case 1:
            customCar.model = "Chevorelet Corvette";
            msrpMultiplier+=2.4;
            break;

        case 2:
            customCar.model = "Dodge Charger";
            msrpMultiplier+=2.5;
            break;

        case 3:
            customCar.model = "Nissan GTR";
            break;
            msrpMultiplier+=2.6;

        case 4:
            customCar.model = "Mercedes Benz";
            msrpMultiplier+=2.5;
            break;

        case 5: 
            customCar.model = "Toyota GLE";
            msrpMultiplier+=2.8;
            break;

        default:
            std::cout << "Error. Invalid value.\n";
    }

    return customCar.model;
}
int generateYear(Car &customCar, double &msrpMultiplier) {
    srand(time(NULL));
    int random = (rand() % 5) + 1;

    switch(random) {
        case 1:
            customCar.year = 2018;
            msrpMultiplier+=2;
            break;

        case 2:
            customCar.year = 2019;
            msrpMultiplier+=2.3;
            break;

        case 3:
            customCar.year = 2020;
            msrpMultiplier+=2.8;
            break;

        case 4:
            customCar.year = 2021;
            msrpMultiplier+=2.9;
            break;

        case 5:
            customCar.year = 2022;
            msrpMultiplier+=3.2;
            break;

        default:
            std::cout << "Error. Invalid value.\n";
    }
    return customCar.year;
}
std::string generateColor(Car &customCar, double &msrpMultiplier) {
    srand(time(NULL));
    int random = (rand() % 5) + 1;

    switch(random) {
        case 1:
            customCar.color = "Red";
            break;

        case 2:
            customCar.color = "White";
            break;

        case 3:
            customCar.color = "Blue";
            break;

        case 4:
            customCar.color = "Black";
            break;

        case 5:
            customCar.color = "Green";
            break;

        default:
            std::cout << "Error. Invalid value.\n";
    }
    return customCar.color;
}
