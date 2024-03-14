//twoDimensionalArrayWithUserInput.cpp
#include <iostream>

int main() {

    int arrayRow = 3;
    int arrayColumn = 3;

    std::string cars[arrayRow][arrayColumn] = {{"Mustang", "Escape", "Ford F-150"},
                                                {"Corvette", "Equinox", "Silverado"},
                                                {"Challenger", "Durango", "Ram 1500"}};
    int row;
    int column;

    std::cout << "Choose the row of the car you're looking for: \n";
    std::cin >> row;
    std::cout << "Choose the column: \n";
    std::cin >> column;
    if (row <= arrayRow && row >= 1 && column <= arrayColumn && column >= 1) {
    std::cout << "Your car is : " << cars[row - 1][column -1] << '\n';
    }
    else {
        std::cout << "Invalid value. The array contains " << arrayRow << " rows" <<
        " and " << arrayColumn << " columns.";
    }
    return 0;
