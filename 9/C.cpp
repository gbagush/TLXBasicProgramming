#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int modus = arr[0];
    int maxCount = 1;

    int current = arr[0];
    int currentCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == current) {
            currentCount++;
        } else {
            if (currentCount >= maxCount) {
                maxCount = currentCount;
                modus = current;
            }
            current = arr[i];
            currentCount = 1;
        }
    }

    if (currentCount >= maxCount) {
        modus = current;
    }
    
    cout << modus;

    return 0;
}
