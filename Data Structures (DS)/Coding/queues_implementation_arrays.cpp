#include <iostream>
using namespace std;

class Queue {
private:
    int queueSize;
    int *queueArray;
    int front, rear;
    int numOfItems;

public:
    Queue(int);
    ~Queue(void);
    bool isEmpty(void);
    bool isFull(void);
    void enqueue(int);
    int dequeue();
    void clear(void);
};

// Constructor
Queue::Queue(int x) {
    queueSize = x; // Initialize queueSize
    queueArray = new int[queueSize];
    front = -1;
    rear = -1;
    numOfItems = 0;
}

// Destructor
Queue::~Queue(void) {
    delete[] queueArray;
}

// Function to check if the queue is empty
bool Queue::isEmpty(void) {
    return numOfItems == 0;
}

// Function to check if the queue is full
bool Queue::isFull(void) {
    return numOfItems == queueSize;
}

// Function to enqueue
void Queue::enqueue(int num) {
    if (isFull()) {
        cout << "The Queue is full. Cannot enqueue " << num << ".\n";
    } else {
        rear = (rear + 1) % queueSize;
        queueArray[rear] = num;
        if (front == -1) { // If the queue was empty
            front = rear;
        }
        numOfItems++;
        cout << "Enqueued: " << num << "\n";
    }
}

// Function to dequeue
int Queue::dequeue() {
    if (isEmpty()) {
        cout << "The Queue is empty. Cannot dequeue.\n";
        return -1; // Return a sentinel value
    } else {
        int value = queueArray[front];
        front = (front + 1) % queueSize;
        numOfItems--;
        if (isEmpty()) { // Reset pointers if queue is empty after dequeue
            front = rear = -1;
        }
        cout << "Dequeued: " << value << "\n";
        return value;
    }
}

// Function to clear the queue
void Queue::clear(void) {
    front = -1;
    rear = -1;
    numOfItems = 0;
    cout << "The queue has been cleared.\n";
}

int main() {
    Queue q(4);
    cout << "Enqueuing 4 items...\n";
    for (int x = 0; x < 4; x++) {
        q.enqueue(x);
    }

    // Attempt to enqueue one more item
    q.enqueue(4); 

    // Dequeue all items
    cout << "Dequeuing all items...\n";
    while (!q.isEmpty()) {
        q.dequeue();
    }

    // Attempt to dequeue from an empty queue
    q.dequeue(); 

    return 0;
}