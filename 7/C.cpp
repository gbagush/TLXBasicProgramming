#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << a;
            a = (a >= 9)? 0: a + 1;
        }
        cout << endl;
    }
}