#include <bits/stdc++.h>
using namespace std;

void reverse(char n[], int m) {
    int cnt = 0;
    m--; // Adjusting m to get the index of the last element
    while (cnt < m) {
        swap(n[cnt++], n[m--]);
    }
}

bool check1(char n[], int m) {
    int s = 0;
    m--; // Adjusting m to get the index of the last element
    while (s <= m) {
        if (n[s] != n[m]) {
            return false;
        } else {
            s++;
            m--;        
        }
    }
    return true;
}

int main() {
    char name[] = {'s', 'h', 'i', 'v', 'a', 'm', '\0'}; // Null-terminate the string
    int m = strlen(name); // Corrected usage of strlen
    
    reverse(name, m);
    bool isPalindrome = check1(name, m);

    if (isPalindrome) {
        cout << "Palindrome string" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    cout << name << endl; // Print the reversed string
    return 0;
}
