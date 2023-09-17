/*Given an arr of sixe N. Make a linked list from the array and return the
head pf the linked list. Head of the linked list is first letter of array
, and tail is last element*/

// Definition of linked list class Node
#include <iostream>
#include <vector> // Include the vector header
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    // Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};

Node* constructLL(vector<int>& arr) {
    Node* temp = new Node();
    Node* head = temp;
    for (int i = 0; i < arr.size(); i++) {
        temp->data = arr[i];
        if (i < (arr.size() - 1)) {
            temp->next = new Node();
            temp = temp->next;
        }
    }
    return head;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    // Create a vector of integers
    vector<int> arr = {1, 2, 3, 4, 5};

    // Construct a linked list from the vector
    Node* head = constructLL(arr);
    
    cout << "Linked List: ";
    printLinkedList(head);

    return 0;
}


