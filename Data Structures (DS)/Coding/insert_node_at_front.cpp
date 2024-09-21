# include <iostream>
using namespace std;

// structure
struct Node {
    int data;
    Node* next;
};

// initialization
Node* head = nullptr;

// function
void insertAtFont (int data) {
    Node* temp1 = new Node;
    temp1 -> data = data;
    temp1 -> next = nullptr;
    if (head == nullptr) { // check if the list is empty
        head = temp1;
    }
    else {
        temp1 -> next = head;
        head = temp1;
    }
}

// function to print the linked list
void printList() {
    Node* current = head;
    while (current != nullptr) {
        cout << current -> data << " ";
        current = current -> next;
}
    cout << "nullptr";
}

// main function
int main() {
    insertAtFont(30);
    insertAtFont(20);
    insertAtFont(10);

    cout << "Linked List: ";
    printList();

    return 0;
}