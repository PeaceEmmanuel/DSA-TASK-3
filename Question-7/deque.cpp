#include <iostream>
#define MAX 100
using namespace std;

class Deque {
private:
    int deque[MAX];
    int left, right;

public:
    Deque() {
        left = -1;
        right = -1;
    }

    void insert_front(int key) {
        if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
            cout << "Overflow\n";
            return;
        }
        if (left == -1) {
            left = 0;
            right = 0;
        } else if (left == 0) {
            left = MAX - 1;
        } else {
            left = left - 1;
        }
        deque[left] = key;
    }

    void insert_rear(int key) {
        if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
            cout << "Overflow\n";
            return;
        }
        if (left == -1) {
            left = 0;
            right = 0;
        } else if (right == MAX - 1) {
            right = 0;
        } else {
            right = right + 1;
        }
        deque[right] = key;
    }

    void delete_front() {
        if (left == -1) {
            cout << "Underflow\n";
            return;
        }
        if (left == right) {
            left = -1;
            right = -1;
        } else if (left == MAX - 1) {
            left = 0;
        } else {
            left = left + 1;
        }
    }

    void delete_rear() {
        if (left == -1) {
            cout << "Underflow\n";
            return;
        }
        if (left == right) {
            left = -1;
            right = -1;
        } else if (right == 0) {
            right = MAX - 1;
        } else {
            right = right - 1;
        }
    }
};