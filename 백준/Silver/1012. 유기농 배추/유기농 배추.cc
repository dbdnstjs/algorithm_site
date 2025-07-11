#include <bits/stdc++.h>
#define N 3000

using namespace std;

bool arr[N][N], chk[N][N];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool is_ok(int x, int y, int max_x, int max_y) {
    return (x >= 0 && x < max_x && y >= 0 && y < max_y && arr[x][y] && !chk[x][y]);
}

void dfs(int x, int y, int max_x, int max_y) {
    chk[x][y] = 1;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (is_ok(nx, ny, max_x, max_y)) dfs(nx, ny, max_x, max_y);
    }
}

int main() {
    int n, x, y, z, num1, num2, i, j, k;
    
    scanf("%d", &n);

    for (k = 0; k < n; k++) {
        scanf("%d %d %d", &x, &y, &z);

        for (i = 0; i < z; i++) {
            scanf("%d %d", &num1, &num2);
            arr[num1][num2] = 1;
        }

        int cnt = 0;
        for (i = 0; i < x; i++) {
            for (j = 0; j < y; j++) {
                if (arr[i][j] && !chk[i][j]) {
                    dfs(i, j, x, y);
                    cnt++;
                }
            }
        }

        printf("%d\n", cnt);

        for (i = 0; i < x; i++) for (j = 0; j < y; j++) arr[i][j] = chk[i][j] = 0;
    }

    return 0;
}
