#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1) return false;
    else if (n == 2) return true;

    for (int i = 2; i*i < n; i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int main() {
    int n, a;
    cin >> n;

    for (int j = 0; j < n; j++) {
        cin >> a;
        cout << (isPrime(a) ? "YA" : "BUKAN") << endl;
    }
}
