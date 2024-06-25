#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* pre;
    Node* next;

    Node(int d) {
        this->data = d;
        this->pre = NULL;
        this->next = NULL;
    }
    ~Node(){
        int value = this -> data;

        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data !!!";
    }
};

void InsertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if (head != NULL) {
        head->pre = temp;
    }
    head = temp;
}

void InsertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->pre = tail;
    tail = temp;
}

void InsertAtAnyPosition(Node*& head, Node*& tail, int position, int d) {
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    if (temp == NULL || temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->pre = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->pre = temp;
}

void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteNode(int position, Node* &head){

    if(position == 1){
        Node* temp = head;
        temp ->next->pre = NULL;
        head = temp -> next;
        temp ->next = NULL;
        delete temp;
    }


    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr ->next;
            cnt++;
        }

        curr -> pre = NULL;
        prev ->next = curr -> next;
        curr -> next = NULL;
        delete curr; 
    }

}
int GetLength(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main() {
    Node* n1 = new Node(10);
    Node* head = n1;
    Node* tail = n1;
    Print(head);

    InsertAtHead(head, 9);
    Print(head);

    InsertAtHead(head, 8);
    Print(head);

    InsertAtHead(head, 7);
    Print(head);

    InsertAtTail(tail, 11);
    Print(head);

    cout << "Tail data: " << tail->data << endl;
    cout << "Head data: " << head->data << endl;

    Print(head);

    cout << "Length of the list: " << GetLength(head) << endl;

    InsertAtAnyPosition(head, tail, 2, 12);
    Print(head);
    deleteNode(1,head);

    return 0;
}
