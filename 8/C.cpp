#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        int divider = 0;
        for (int j = 1; j * j <= a; j++) {
            if (a % j == 0) {
                divider += 1;
            }
        }
        cout << (divider <= 2? "YA" : "BUKAN") << endl;
    }
}