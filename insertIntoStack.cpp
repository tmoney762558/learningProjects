#include <iostream>
void Push(int x, int A[], int &top);
void Pop(int top);
void Print(int top, int A[]);

int top = -1;
int A[10];
int x;
int main() {
    int selection;
    bool running = true;

    std::cout << "Welcome to the Stack Insertion Program!\n";
        do {
    std::cout << "What would you like to do?\n";
    std::cout << "1) Insert Value\n";
    std::cout << "2) Exit\n";
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
                std::cout << "Thank you for visiting.\n";
                running = false;
        }
    } while (running = true);
    return 0;
}
void Push(int x, int A[], int &top) {
    top++;
    A[top] = x;
}
void Print(int top, int A[]) {
    for (int lastPos = top; lastPos >= 0; lastPos--) {
        std::cout << A[lastPos] << '\n';
    }
}
