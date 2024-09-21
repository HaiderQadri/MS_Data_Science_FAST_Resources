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
void insertIntoEmptyList(Node* &head, int data) {
    Node* node1 = new Node;
    node1 -> data = data;
    node1 -> next = nullptr;
    head = node1;
}

// main function
int main () {

    // function call
    insertIntoEmptyList(head, 10);

    // Output
    if (head != nullptr) 
        cout << "The node is inserted" << endl;
    else 
        cout << "List is still empty!" << endl;

    return 0;
}