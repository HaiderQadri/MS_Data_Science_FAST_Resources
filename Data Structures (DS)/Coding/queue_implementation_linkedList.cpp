#include <iostream>
using namespace std;

class Queue {

    private:
    struct QueueNode {
        int value;
        QueueNode *next;
    };
    QueueNode *front;
    QueueNode *rear;
    int numItems;

    public:
    Queue(void) {
        front = Null;
        rear = Null;
        numItems = 0;
    }

    bool isEmpty(void) {
        if (numItems)
        return false;
        else
        return true;
    }

    void enqueue(int num) {
        QueueNode *newNode = new QueueNode;
        QueueNode -> value = num;
        QueueNode -> next = nullptr;
        
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear -> next = newNode;
            rear = newNode;
        }
        numItems++;
    }

    int dequeue(void) {
        if (isEmpty()) {
            cout << "Cannot dequeue because list is already empty.\n";
        } else {
            QueueNode *temp;
            int num;
            num = front -> value;
            temp = front -> next;
            delete front;
            front = temp;
            numItems--;
        }
        return num;
    }

    ~ Queue (void) {
        while(!isEmpty())
        dequeue();
    }
};

int main () {
    Queue q(4);
    cout << "Enqueing 4 elements \n";
    for (int i = 0; i < 4; i++) {
        q.enqueue(i);
    }
}