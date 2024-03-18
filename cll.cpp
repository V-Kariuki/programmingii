#include <iostream>

// Define a node for the circular linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;

    if (head == nullptr) {
        head = newNode;
        newNode->next = head; // Point back to itself
    } else {
        newNode->next = head->next;
        head->next = newNode;
    }
}

// Function to display the list
void display(const Node* head) {
    const Node* current = head;
    if (head != nullptr) {
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
    }
    std::cout << std::endl;
}

// Function to delete the entire list to avoid memory leaks
void deleteList(Node*& head) {
    if (head == nullptr)
        return;
    
    Node* current = head->next;
    while (current != head) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    delete head;
    head = nullptr;
}

int main() {
    Node* head = nullptr;

    // Insert some elements into the circular linked list
    insertAtBeginning(head, 1);
    insertAtBeginning(head, 2);
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 4);
    insertAtBeginning(head, 5);

    std::cout << "Circular Linked List: ";
    display(head);

    // Clean up memory by deleting the list
    deleteList(head);

    return 0;
}
