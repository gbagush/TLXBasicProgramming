#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, P; cin >> N >> M >> P;

    int matA[N][M];
    int matB[M][P];
    int res[N][P];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matA[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> matB[i][j];
        }
    }

    for(int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            int total = 0;
            for(int k = 0; k < M; k++) {
                total += (matA[i][k] * matB[k][j]);
            }
            cout << total << " ";
        }
        cout << endl;
    }


    return 0;
}