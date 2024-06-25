#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size =9;
    int arr[9] = {10, 20, 30, 40, 50, 60 , 70, 80, 10};

    for (int i = 0; i < size; i++)
    {
        int index = arr[i]%size;
        arr[index]+=size;
    }

    for (int i = 0; i < size; i++)
    {
        if((arr[i]/size)<2){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}