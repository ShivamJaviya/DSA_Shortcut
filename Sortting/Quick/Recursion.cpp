#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivot =  arr[s];
    int cnt = 0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i] <= pivot)
        {
            cnt++;
        }
    }


    int pivoteIndex = s + cnt;

    swap(arr[pivoteIndex],arr[s]);

    // left and right part for it 

    int i=s;
    int j=e;


    while(i<pivoteIndex && j>pivoteIndex)
    {
      while (arr[i] < pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if(i < pivoteIndex && j >  pivoteIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }


    return pivoteIndex;

}

void quick(int arr[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }

    int pivot = partition(arr,s,e);

    quick(arr,s,pivot-1);
    quick(arr,pivot+1,e); 
}
int main()
{

    int n = 5;
    int arr[n] = {10, 20, 8, 1, 2};
    quick(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}