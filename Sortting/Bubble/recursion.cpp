#include<bits/stdc++.h>
using namespace std;
void sor(int* arr,int size)
{

    if(size == 0 || size == 1)
    {
        return ;
    }
    for(int i=0;i < size-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    sor(arr,size-1);
}
int main()
{
    int arr[10] = {1,2,40,100,90,1000,500,3000,900,700};
    
    sor(arr,10);
    for(int i:arr)
    {
        cout<<i<<" ";
    }

    return 0;
}