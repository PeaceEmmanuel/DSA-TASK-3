#include <iostream>
using namespace std;

class CircularQueue {
private:
    int capacity;
    int* queue;
    int front, rear;

public:
    CircularQueue(int cap) {
        capacity = cap;
        queue = new int[capacity];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete[] queue;
    }

    bool is_empty() {
        return front == -1;
    }

    bool is_full() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int item) {
        if (is_full()) {
            cout << "Queue Overflow!\n";
            return;
        }
        if (is_empty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        queue[rear] = item;
        cout << "Enqueued: " << item << "\n";
    }

    int dequeue() {
        if (is_empty()) {
            cout << "Queue Underflow!\n";
            return -1;
        }
        int item = queue[front];
        if (front == rear) {
            front = rear = -1; // Queue becomes empty
        } else {
            front = (front + 1) % capacity;
        }
        cout << "Dequeued: " << item << "\n";
        return item;
    }
};