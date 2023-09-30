#include <bits/stdc++.h>
using namespace std;

int main() {
    float a;
    cin >> a;

    int b = trunc(a);

    if (b > a) { cout << b-1 << " " << b; }
    else if (b < a) { cout << b << " " << b+1; }
    else { cout << b << " " << b; }
}