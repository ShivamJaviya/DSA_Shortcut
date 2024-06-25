#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is Free for Node with Data " << value << endl;
    }
};

void InsertAtHead(Node *&head, int d) {
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node *&tail, int d) {
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&head, Node *&tail, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void Print(Node *&head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void DeleteNode(int position, Node *&head, Node *&tail) {
    if (head == NULL) return;  // Edge case: empty list

    if (position == 1) {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        if (head == NULL) {  // List is now empty
            tail = NULL;
        }
    } else {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr == NULL) return;  // Position out of bounds

        prev->next = curr->next;
        if (curr->next == NULL) {  // Deleted the last node
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;
        if(slow == fast){
            cout << "Loop detected at node with data: " << slow->data << endl;
            return slow;
        }
    }

    return NULL;
}

Node* getstartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeloop(Node* head){
    if(head == NULL){
        return;
    }

    Node* startofloop = getstartingNode(head);
    if(startofloop == NULL){
        return;
    }
    
    Node* temp = startofloop;
    while(temp->next != startofloop){
        temp = temp->next;
    }

    temp->next = NULL;
}

int main() {
    // Creating New Node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    Print(head);

    InsertAtHead(head, 12);
    Print(head);

    InsertAtTail(tail, 15);
    Print(head);

    InsertAtTail(tail, 20);
    Print(head);

    InsertAtPosition(head, tail, 2, 18);
    Print(head);

    InsertAtPosition(head, tail, 1, 25);
    Print(head);

    cout << "Head data: " << head->data << endl;
    cout << "Tail data: " << tail->data << endl;

    DeleteNode(1, head, tail);
    Print(head);

    DeleteNode(4, head, tail);
    Print(head);

    cout << "Head data: " << head->data << endl;
    cout << "Tail data: " << tail->data << endl;

    floydDetectLoop(head);
    getstartingNode(head);
    removeloop(head);
    Print(head);


    return 0;
}
