#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10,10,10,20,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j=0;
    int temp[n];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            temp[j++]=arr[i];;
        }
    }
    temp[j++]=arr[n];
      for (int i = 0; i < j; i++)
        arr[i] = temp[i];

for (int i = 0; i < j; i++)
{
    cout<<arr[i];
}
    return 0;
}