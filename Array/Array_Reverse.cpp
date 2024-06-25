#include<bits/stdc++.h>
using namespace std;

void byswapreverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void byloopreverse(int arr[], int size)
{
    cout << "\nAfter By Loop Reverse Array Elements is : ";
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nBefore reverse Array Elements is : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    byswapreverse(arr, n);
    byloopreverse(arr, n);

    cout << "\nAfter Swap Reverse Array Elements is : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }

    return 0;
}
