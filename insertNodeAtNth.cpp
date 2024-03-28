#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

void createNodes(Node* head, int numberOfNodes);
void insertIntoNth(Node* &head, int nodePosition, int nodeData);
void print(Node* head);


int main() {
    int operation;
    Node* head = NULL;
    int nodePosition;
    int numberOfNodes = 0;
    int nodeData;
    bool running = true;
    head = new Node();
    while (running == true) {
    std::cout << "What would you like to do today?\n";
    std::cout << "1) Create nodes\n";
    std::cout << "2) Insert a node\n";
    std::cout << "3) Exit\n";
    std::cin >> operation;
    
        switch(operation) {
            case 1:
                std::cout << "How many nodes would you like?\n";
                std::cin >> numberOfNodes;
                createNodes(head, numberOfNodes);
                print(head);
                break;

            case 2:
                std::cout << "Where would you like to place your node?\n";
                std::cin >> nodePosition;
                std::cout << "What would you like to place in this node?\n";
                std::cin >> nodeData;
                if (nodePosition >= numberOfNodes) {
                    insertIntoNth(head, nodePosition, nodeData);
                    print(head);
                }
                else {
                    std::cout << "Invalid value. The list is only" << numberOfNodes << "nodes long.\n";
                    break;
                }
                case 3:
                running = false;
                std::cout << "Thank you for visiting\n";
                break;
        }
    }
}

void createNodes(Node* head, int numberOfNodes) {
    Node* temp = head;
    int totalNumberOfNodes =+ numberOfNodes;
        for (int i = 0; i < totalNumberOfNodes; i++) {
            while(temp->next != NULL) {
            temp = temp->next;
            }
        temp->next = new Node();
        temp = temp->next;
        std::cout << "Enter your data for this node: ";
        std::cin >> temp->data;
    }
    totalNumberOfNodes += numberOfNodes;
    
}
void insertIntoNth(Node* &head, int nodePosition, int nodeData) {
    Node* temp = head;
    for(int i = 0; i < nodePosition; i++) {
        temp = temp->next;
    }
    temp->data = nodeData;
}
void print(Node* head) {
    Node* temp = head;
    temp = temp->next;
    while (temp != NULL) {
        std::cout << temp->data << "\n";
        temp = temp->next;
    }
}
