#include <bits/stdc++.h>
using namespace std;

void bubble(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {  // Correct outer loop to iterate n-1 times
        for (int j = 0; j < n - i ; j++) {  // Inner loop to iterate through unsorted elements
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> v = {10, 11, 15, 5, 7, 13, 27, 70};

    cout << "Before Sorting: " << endl;
    for (int i : v) cout << i << " ";
    cout << endl;

    bubble(v);

    cout << "After Sorting: " << endl;
    for (int i : v) cout << i << " ";
    cout << endl;

    return 0;
}
