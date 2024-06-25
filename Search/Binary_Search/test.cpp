#include <bits/stdc++.h>

using namespace std;

void binary_search(int arr[], int first, int last, int target) {
    int mid = -1; // Initialize mid to -1

    while (first <= last) {
        mid = (first + last) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            return;
        } else if (target > arr[mid]) {
            first = mid + 1;
        } else {
            last = mid - 1;
        }
    }

    // Check if target is not equal to the last examined mid
    if (target != arr[mid]) {
        cout << "Element not found";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    int target;
    cin >> target;

    binary_search(arr, 0, n - 1, target);

    return 0;
}
