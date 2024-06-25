#include<bits/stdc++.h>
using namespace std;

class Stack{

    public :
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top =-1;
    }

    void push(int data){
        if(size - top > 1){
            top++;
            arr[top]= data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
                
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }


    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};
int main()
{

    Stack st(4);
    st.push(10);
    st.push(11);
    st.push(8);
    st.push(13);
    st.pop();

    cout<<st.peek()<<endl;

    
    return 0;
}