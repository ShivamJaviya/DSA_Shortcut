#include<bits/stdc++.h>
using namespace std;

int main () {
    int matrix[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
    int target = 12;
    int raw = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int s = 0;
    int e = raw * col - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int element = matrix[mid / col][mid % col];
        if (element == target) {
            cout << "Found";
            return 0;
        } else if (element < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}
