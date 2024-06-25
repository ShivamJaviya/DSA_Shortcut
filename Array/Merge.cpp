#include <iostream>
using namespace std;

void merge(int arr1[], int a, int arr2[], int b, int arr3[]) {
    int i = 0, j = 0, k = 0;

    while (i < a && j < b) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < a) {
        arr3[k++] = arr1[i++];
    }

    while (j < b) {
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 10, 20};
    int arr2[] = {3, 4, 30, 40};
    int arr3[8];

    merge(arr1, 4, arr2, 4, arr3);

    cout << "Merged array: ";
    for (int i = 0; i < 8; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
