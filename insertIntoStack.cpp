#include <iostream>
void Push(int x, int A[], int &top);
void Pop(int &top);
void Print(int top, int A[]);

int main() {

    int top = -1;
    int A[10];
    int x;    
    int selection;
    bool running;

    std::cout << "Welcome to the Stack Insertion Program!\n";
    do {
        std::cout << "What would you like to do?\n";
        std::cout << "1) Insert Value\n";
        std::cout << "2) Remove Value\n";
        std::cout << "3) Print Values\n";
        std::cout << "4) Exit\n";
        std::cin >> selection;

        switch (selection) {
            case 1:
                std::cout << "Enter your integer value.\n";
                std::cin >> x;
                Push(x, A, top);
                std::cout << "***************************\n";
                Print(top, A);
                break;
            case 2:
                Pop(top);
                std::cout << "You have removed the top value\n";
            case 3:
                Print(top, A);
                break;
            case 4:
                running = false;
                std::cout << "Thank you for visiting.\n";
                break;
            default:
                std::cout << "Invalid selection. Please pick the number corresponding to your operation.\n";
                break;
        }
    } while (running == true);
    return 0;
}
void Push(int x, int A[], int &top) {
    top++;
    A[top] = x;
}
void Pop(int &top) {
     top--;
}
void Print(int top, int A[]) {
    if (top == -1) {
        std::cout << "The array is empty!\n";
        return;
    }
    for (int lastPos = top; lastPos >= 0; lastPos--) {
        std::cout << A[lastPos] << '\n';
    }
}
