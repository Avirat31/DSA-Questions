// Function to delete the last node of a linked list
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int x) : data(x), next(nullptr) {}
};

Node* deleteLastNode(Node* head) {
    // If the list is empty or has only one node, return nullptr
    if (head == nullptr || head->next == nullptr) {
        delete head; // Delete the last node
        return nullptr;
    }

    // Initialize two pointers, prev and current, to traverse the list
    Node* prev = nullptr;
    Node* current = head;

    // Traverse the list to find the second-to-last node
    while (current->next != nullptr) {
        prev = current;
        current = current->next;
    }

    // Update the next pointer of the second-to-last node to nullptr
    prev->next = nullptr;

    // Delete the last node
    delete current;

    return head; // Return the updated head of the list
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
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout << "Original Linked List: ";
    printLinkedList(head);

    // Delete the last node
    head = deleteLastNode(head);

    cout << "Linked List after deleting the last node: ";
    printLinkedList(head);

    return 0;
}
