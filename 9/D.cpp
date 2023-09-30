#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int mat[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> mat[i][j];
        }
    }

    for(int j = 0; j < M; j++) {
        for(int i = N-1; i >= 0; i--) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
