#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if (size - top > 1) {
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
};

// Helper function to insert an element in a sorted way
void insertSorted(stack<int> &stack, int num) {
    // Base case: Either stack is empty or the top element is smaller than the number to be inserted
    if (stack.empty() || stack.top() < num) {
        stack.push(num);
        return;
    }

    // Remove the top element
    int n = stack.top();
    stack.pop();

    // Recursive call
    insertSorted(stack, num);

    // Put the top element back
    stack.push(n);
}

// Function to sort the stack
void sortStack(stack<int> &stack) {
    // Base case: If the stack is empty
    if (stack.empty()) {
        return;
    }

    // Remove the top element
    int num = stack.top();
    stack.pop();

    // Recursive call to sort the remaining stack
    sortStack(stack);

    // Insert the element back in a sorted way
    insertSorted(stack, num);
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(11);
    st.push(8);
    st.push(13);

    // Sort the stack
    sortStack(st);

    // Print the sorted stack
    cout << "Sorted stack (top to bottom): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}
