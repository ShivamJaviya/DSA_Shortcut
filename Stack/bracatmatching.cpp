#include <bits/stdc++.h>
using namespace std;

int minReversals(string str) {
    int len = str.length();

    // If the length of the string is odd, it's not possible to balance it
    if (len % 2 == 1) {
        return -1;
    }

    stack<char> s;

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if (ch == '(') {
            s.push(ch);
        } else { // ch == ')'
            if (!s.empty() && s.top() == '(') {
                s.pop();
            } else {
                s.push(ch);
            }
        }
    }

    // Now the stack contains only unbalanced parentheses
    int open = 0, close = 0;
    while (!s.empty()) {
        if (s.top() == '(') {
            open++;
        } else {
            close++;
        }
        s.pop();
    }

    // Minimum number of reversals needed
    int ans = (open + 1) / 2 + (close + 1) / 2;
    return ans;
}

int main() {
    string enter;
    cin >> enter;

    int result = minReversals(enter);
    cout << result << endl;

    return 0;
}
