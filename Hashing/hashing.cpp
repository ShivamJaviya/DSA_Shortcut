#include<bits/stdc++.h>
using namespace std;
int hashhh[100000000];
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

   

    for (int i = 0; i < n; i++)
    {
        hashhh[arr[i]]+=1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<hashhh[number];
    }
    
    
    return 0;
}