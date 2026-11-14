#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> items;

public:
    bool is_empty() {
        return items.empty();
    }

    void enqueue(int item) {
        items.push_back(item);
        cout << "Enqueued: " << item << "\n";
    }

    void dequeue() {
        if (is_empty()) {
            cout << "Queue Underflow!\n";
            return;
        }
        cout << "Dequeued: " << items.front() << "\n";
        items.erase(items.begin());
    }

    void display() {
        cout << "Current Queue: ";
        for (int item : items) {
            cout << item << " ";
        }
        cout << "\n";
    }
};