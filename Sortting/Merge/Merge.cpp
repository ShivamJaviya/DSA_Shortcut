#include <bits/stdc++.h>
using namespace std;

vector<int> temp;

void add(vector<int>& arr, int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
}

void merge(vector<int>& arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + ((high - low) / 2);
        merge(arr, low, mid);
        merge(arr, mid + 1, high);
        add(arr, low, mid, high);
    }
}

int main()
{
    vector<int> arr = {40, 70, 55, 120, 10010, 888, 999, 151, 6363, 7054, 8484};
    int low = 0;
    int high = arr.size() - 1;

    merge(arr, low, high);

    // Print the sorted array
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
