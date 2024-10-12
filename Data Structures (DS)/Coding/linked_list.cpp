#include <iostream>
using namespace std;

// class
class Node {
    public:
    int value;
    Node *next;

    // constructor
    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

// initialization
Node *head = nullptr;

int main() {

    int array[] = {9, 6};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        Node *newNode = new Node(array[i]);
        
        if (head == nullptr) {
            head = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }
    // add a node at the end of the array
    Node *node2 = new Node(7);
    Node *temp = head;
    while (temp -> next != nullptr) {
        temp = temp -> next;
    }
    temp -> next = node2;

    // add note at 1 position
    int position = 1;
    Node *newNode = new Node(10);
    int currentPosition = 0;
    temp = head;

    while (temp != nullptr && currentPosition < position -1) {
        temp = temp -> next;
        currentPosition++;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;

    // delete the middile node
    int pos = 2;
    int currentposition = 0;
    temp = head;
    Node *pre = nullptr;
    while (temp != nullptr && currentposition < pos - 1) {
        temp = temp -> next;
        currentposition++;
        pre = temp;
        temp = temp -> next;
    }
    pre -> next = temp -> next;
    delete temp;

    // Printing the linked list
    Node *current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }

    

    
    return 0;
}
