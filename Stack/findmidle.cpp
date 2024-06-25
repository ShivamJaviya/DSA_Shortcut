#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    int* arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if (top < size - 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek() {
        if (top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    void removeMid() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return;
        }
        int midIndex = top / 2;
        removeMidUtil(midIndex);
    }

private:
    void removeMidUtil(int midIndex) {
        if (midIndex == 0) {
            pop();
            return;
        }
        int temp = peek();
        pop();
        removeMidUtil(midIndex - 1);
        push(temp);
    }
};

int main() {
    Stack st(4);
    st.push(10);
    st.push(11);
    st.push(8);
    st.push(13);


    st.removeMid();

    cout << "Stack after removing middle element: ";
    while (!st.isEmpty()) {
        cout << st.peek() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
