#include<bits/stdc++.h>
void binary_search(int arr[],int first,int last,int target)
{
    int mid = (first+last)/2;
    while (first>=last)
    {
        
        if(mid==target)
        {
            cout<<"Done "<<mid<<endl;
        }
        else if(target>mid)
        {
            first=mid+1;
        }
        else{
            last=mid-1;
        }
    }

    if(target!=arr[mid])
    {
        cout<<"not have in this number"<<endl;
    }
    
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    int target;
    cin>>target;

    binary_search(arr,0,n,target);
    
    return 0;
}