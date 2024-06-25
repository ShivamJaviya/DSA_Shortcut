#include<bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int let1 = mid - s + 1;
    int let2 = e - mid;

    int *firstarr = new int[let1]; // making array
    int *secondarr = new int[let2];

    // add value in array 
    for(int i = 0; i < let1; i++)
    {
        firstarr[i] = arr[s + i];
    }

    for(int j = 0; j < let2; j++)
    {
        secondarr[j] = arr[mid + 1 + j];
    }

    int index1 = 0;
    int index2 = 0;
    int k = s;

    while(index1 < let1 && index2 < let2)
    {
        if(firstarr[index1] < secondarr[index2])
        {
            arr[k++] = firstarr[index1++];
        }
        else
        {
            arr[k++] = secondarr[index2++];
        }
    }

    while(index1 < let1)
    {
        arr[k++] = firstarr[index1++];
    }

    while(index2 < let2)
    {
        arr[k++] = secondarr[index2++];
    }

    delete[] firstarr;
    delete[] secondarr;
}

void mergesort(int *arr, int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    mergesort(arr, s, mid);     // left side
    mergesort(arr, mid + 1, e); // right side
    merge(arr, s, e);
}

int main()
{
    int n = 5;
    int arr[n] = {10, 20, 8, 1, 2};
    mergesort(arr, 0, n - 1);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
