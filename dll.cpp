#include <iostream>

// Define a node for the doubly linked list
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Function to append a node to the end of the list
void append(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    newNode->prev = current;
}

// Function to display the list forward
void displayForward(const Node* head) {
    const Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to display the list backward
void displayBackward(const Node* tail) {
    const Node* current = tail;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

// Function to delete the entire list to avoid memory leaks
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Node* head = nullptr;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 4);
    append(head, 5);

    std::cout << "Doubly Linked List (Forward): ";
    displayForward(head);

    // Find the tail of the list
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    std::cout << "Doubly Linked List (Backward): ";
    displayBackward(tail);

    // Clean up memory by deleting the list
    deleteList(head);

    return 0;
}
