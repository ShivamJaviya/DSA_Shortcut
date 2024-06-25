#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int search;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    sort(arr,arr+n);

    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;


    int* abc=arr;

    cout<<"Search :- ";
    cin>>search;

    int low = 0;
    int high = n-1;
    unsigned mid;
    while (low<high)
    {
        mid = ((unsigned)low+(unsigned)high)/2;
        if(search == arr[mid]) {
            cout<<"Element found at position :"<<mid;
            break;
        } else if(search>mid) {
            low=mid;
        } else {
            high=mid;
        }
    }


    if(search != arr[mid])
    {
        cout<<"not found";
    }
    return 0;
}
