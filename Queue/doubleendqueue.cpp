#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> arr;
    arr.push_front(12);
    arr.push_back(14);
    arr.push_front(13);
    arr.push_back(15);

    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    arr.pop_front();
    arr.pop_back();

    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;

    if(arr.empty()){
        cout<<"Is empty"<<endl;
    }
    else{
        cout<<"Not Emoty"<<endl;
    }

    
    return 0;
}