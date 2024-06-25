#include<bits/stdc++.h>
using namespace std;
int arrofmin(int arr[],int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}

int arrofmax(int arr[],int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
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

    int max = arrofmax(arr,n);
    int min = arrofmin(arr,n);

    cout<<"Array Of Maximum Value of : "<<max<<endl;
    cout<<"Array Of Minimum Value of : "<<min<<endl;

    return 0;
}