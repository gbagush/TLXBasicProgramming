#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i == 42) {
            cout << "ERROR";
            return 0;
        }
        if (i % 10 != 0) {
            cout << i << endl;
        }
    }
}