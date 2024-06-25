#include <bits/stdc++.h>
using namespace std;

void printarry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void altswap(int arr[], int size)
{
    int start = 1;
    int end = 0;

    for (int i = 0; i < size / 2; i++)
    {
        swap(arr[start], arr[end]);
        start += 2;
        end += 2;
    }
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    
    printarry(arr, 5); // Use 5 as the size of the array

    altswap(arr, 5); // Call the altswap function to swap elements in pairs

    cout << "\nAfter swapping:\n\n";
    printarry(arr, 5);

    return 0;
}
