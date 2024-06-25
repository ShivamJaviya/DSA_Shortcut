#include <bits/stdc++.h>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, size;

public:
    CircularQueue(int s) {
        size = s;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value) {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
            cout << "Queue is full" << endl;
            return false;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = value;
        } else {
            if (front == -1) {
                front = rear = 0;
            } else {
                rear++;
            }
            arr[rear] = value;
        }
        return true;
    }

    int dequeue() {
        if (front == -1) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear) {
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;
        } else {
            front++;
        }
        return ans;
    }
    
    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    int size = 100;
    CircularQueue q(size);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    return 0;
}
