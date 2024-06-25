#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int size =9;
    int arr[9] = {10, 20, 30, 40, 50, 10 , 20, 30, 40};
    int ans=0;
    for (int i = 0; i < size; i++)
    {
       ans=ans^arr[i];
    }

    cout<<ans;
    

    return 0;
}