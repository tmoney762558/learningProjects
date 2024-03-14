#include <iostream>

int main() {

    //Tips I learned from this program:
    //Make sure you don't accidentally try to get the size of an array with the wrong data type.
    //(Ex. std::string array[5]; sizeof(array[])/sizeof(int))
    //Newline characters in the input buffer can be annoying when working with both cin and
    //getline().
    //Arrays cannot change in size.
    int arrayLength;
    std::string temp;

    std::cout << "Array Filling Program\n";
    std::cout << "How many strings will your array take?: ";
    std::cin >> arrayLength;
    std::cout << "You chose an array length of " << arrayLength << ".\n";

    std::string foods[arrayLength];

    for(int i = 0; i < arrayLength; i++) {
        std::cout << "Enter string #" << i + 1 << " or q to quit.\n";
        std::cin >> temp;
        if(temp == "q") {
            break;
        }
        else {
            (foods[i] = temp);
        }
    }

    std::cout << "You like the following food:\n";
    
    for(int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
    }
    return 0;
}