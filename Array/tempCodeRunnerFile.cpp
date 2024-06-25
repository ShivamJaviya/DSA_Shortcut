#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,0,2,0,3,0,0};
    int n = sizeof(arr) / sizeof(arr[0]); // Correctly calculate the number of elements
    int movearr[n];
    int k=0;

   for(int i=0;i<n;i++)
   {
    if(arr[i]!=0)
    {
        movearr[k++] = arr[i];
    }
   }

   while(k<n)
   {
    movearr[k++] = 0;
   }

   for(int i:movearr) cout<<i<<" ";
    return 0;
}