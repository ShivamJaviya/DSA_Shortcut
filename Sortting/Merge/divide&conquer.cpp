#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int r) {
    int i = l;
    int j = mid + 1;
    int k = l;
    int b[r + 1]; // Increase array size by 1

    while (i <= mid && j <= r) {
        if (a[i] < a[j]) {
            b[k++] = a[i++];
        } else {
            b[k++] = a[j++];
        }
    }

    while (i <= mid) {
        b[k++] = a[i++];
    }

    while (j <= r) {
        b[k++] = a[j++];
    }

    for (k = l; k <= r; k++) {
        a[k] = b[k];
    }
}

void mergesort(int a[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, mid, r);
    }
}

int main() {
    int arr[] = {40, 70, 55, 120, 10010, 888, 999, 151, 6363, 7054, 8484};
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    mergesort(arr, 0, high);

    // Print the sorted array
    for (int i = 0; i <= high; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
