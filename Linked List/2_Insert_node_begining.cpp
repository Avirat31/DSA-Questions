
// Function to insert a new node at the beginning of a linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};
Node* insertAtFirst(Node* list, int newValue) {
    // Create a new node with the given value
    Node* newNode = new Node(newValue);
    // Set the next pointer of the new node to the current head of the list
    newNode->next = list;
    // Update the head of the list to point to the new node
    list = newNode;
    // Return the updated head of the list
    return list;
}

void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create an empty linked list
    Node* head = nullptr;

    head = insertAtFirst(head, 5);
    head = insertAtFirst(head, 3);
    head = insertAtFirst(head, 1);

    cout << "Linked List: ";
    printLinkedList(head);

    return 0;
}
