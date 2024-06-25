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

void InsertNode(Node* &tail, int element, int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr ->next;
        }


        Node* temp = new Node(d);
        temp -> next = curr ->next;
        curr -> next = temp;
    }
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

void Print(Node *&tail) {
    Node *temp = tail;
    cout<<tail->data<<endl;

    if(tail == NULL){
        cout<<"List is Empty !!!"<<endl;
    }

    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);
    
}

void DeleteNode(Node* &tail,int value) {

        if (tail == NULL) {  // List is now empty
            cout<<"List is empty :"<<endl;
            return ;
        }
    else {
        Node* prev = tail;
        Node* curr = prev->next;

        while (curr -> data != value)
        {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;


        if(tail == curr){
            tail  = prev;
        }
        else if(tail == curr){
            tail ==prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main() {
    // Creating New Node
    Node* tail = NULL;
    InsertNode(tail,5,3);
    Print(tail);   


    DeleteNode(tail,3);
    Print(tail);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   


    return 0;
}
