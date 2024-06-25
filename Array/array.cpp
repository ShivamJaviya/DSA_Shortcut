#include<bits/stdc++.h>
using namespace std;

void printarr (int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Array index Of "<<i<<" Value "<<arr[i]<<endl;
    }
    
}

int main()
{
    //declaresion
    int number[15];
    //accessing array 
    cout<<"Value at 14 index "<<number[14]<<endl;

    //out of rang
    cout<<"Value at 20 index "<<number[20]<<endl;

    //initialising an array
    int second[3]={20,30,40};

    //accessing elements
    cout<<"Value at 2 index "<<second[2]<<endl;

    //declaresion with initialising 
    int third[5]={3,4,5};

    //printing array

    for (int i = 0; i < 5; i++)
    {
        cout<<"Array index of "<<i<<" Value : "<<third[i]<<endl;
    }
    

    // function calling and print by they

    int forth[5]={0};
    printarr(forth,5);

    //by loop Value Taking and value getting 

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
    
    return 0;
}