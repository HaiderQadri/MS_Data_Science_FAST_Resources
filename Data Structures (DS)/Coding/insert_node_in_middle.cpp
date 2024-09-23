# include <iostream>
using namespace std;

// structure
struct Node{
    int data;
    Node* next;
};

// initialization
Node* head = nullptr;

// function to add node in the middle
bool insertInMiddle(Node* &head, int data, int position) {
    if (position <= 0) {
        cout << "Invalid position to add node!";
        return false;
    }

    Node* temp1 = new Node;
    temp1 -> data = data;
    temp1 -> next = nullptr;

    if (position == 1 || head == nullptr) {
        temp1 -> next = head;
        head = temp1;
        return true;
    }

    Node* current = head;
    int currentPosition = 1;

    while (currentPosition < position - 1 && current -> next != nullptr) {
        current = current -> next;
        currentPosition++;
    }

    temp1 -> next = current -> next;
    current -> next = temp1;
    return true;
}

// function to print the linked list
void printList(Node* &head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current -> data << " -> ";
        current = current -> next;
    }
    cout << nullptr;
}

// main function
int main () {
    // function call
    insertInMiddle(head, 10, 1);
    insertInMiddle(head, 20, 2);
    insertInMiddle(head, 30, 2);

    // function call for printing linked list
    printList(head);

    return 0;
}