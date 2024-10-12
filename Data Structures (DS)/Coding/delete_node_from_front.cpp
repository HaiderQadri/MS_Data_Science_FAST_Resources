# include <iostream>
using namespace std;

// structure
struct Node {
    int data;
    Node* next;
};

// class
class LinkedList {
    public:
    Node* head;

    // constructor
    LinkedList() {
        head = nullptr;
    }

    // functiom to add node at front
    void addNode(int data) {
        Node* newNode = new Node;
        newNode -> data = data;
        newNode -> next = head;
        head = newNode;
    }

    // function to delete node from front 
    void deleteNode() {
        if (head == nullptr) {
            cout << "List is empty! Nothing to delete." << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        delete temp;
    }

    // funcion to print the linked list
    void printList(){
        Node* current = head;
        while (current != nullptr) {
            cout << current -> data << " ";
            current = current -> next;
        }
        cout << "nullptr" << endl;
    }
};

// main function
int main () {
    LinkedList list;

    list.addNode(10);
    list.addNode(20);
    list.addNode(30);

    cout << "Current list" << endl;
    list.printList();

    list.deleteNode();

    cout << "The list after deleting the node from the first position" << endl;

    list.printList();
}