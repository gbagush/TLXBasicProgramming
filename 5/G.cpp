#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2, dX, dY;

    cin >> x1 >> y1 >> x2 >> y2;

    dX = (x1 < x2) ? (x1 - x2) * -1 : (x1 - x2);
    dY = (y1 < y2)? (y1 - y2) * -1 : (y1 - y2);

    cout << dX + dY;
}