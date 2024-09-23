# include <iostream>
using namespace std;

// structure
struct Node {
    int data;
    Node* next;
};

// initialization
Node* head = nullptr;

// function to add node at the end
void insertAtEnd(int data) {
    Node* temp1 = new Node;
    temp1 -> data = data;
    temp1 -> next = nullptr;
    if (head == nullptr) {
        head = temp1;
    }
    else {
        Node* current = head;
        while (current -> next!= nullptr) {
            current = current -> next;
        }
        current -> next = temp1;
    }
}

// function to print the list
void printList() {
    Node* current = head;
    while (current != nullptr) {
        cout << current -> data << " ";
        current = current -> next;
    }
    cout << "nullptr";
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    cout << "Linked List: ";
    printList();

    return 0;
}