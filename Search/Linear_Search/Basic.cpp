#include<bits/stdc++.h>
using namespace std;

bool search (int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }

    return 0;
    
}
int main()
{
    int n;
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Array Elements is : ";
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\nEnter Your Search Element : "<<endl;
    int key; cin>>key;

    

    int found=search(arr,n,key);

    if(found){
        cout<<"Element is Present "<<endl;
    }
    else{
        cout<<"Element is Absent "<<endl;
    }


    return 0;
}