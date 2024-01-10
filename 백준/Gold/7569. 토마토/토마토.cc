#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

#define X first 
#define Y second
#define Z third

int board[101][101][101];
int dis[101][101][101]; // 0 아니면 방문

int dx[6] = { 0,0,-1,1,0,0 };
int dy[6] = { 0,0,0,0,-1,1 };
int dz[6] = { 1,-1,0,0,0,0 };

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, m, h;
    queue <tuple<int,int ,int>> q;
    cin >> m >> n >> h;
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
             for (int j = 0; j < m; j++) {
                cin >> board[i][j][k]; // 1: 익은 토마토 0: 익지 않은 토마토, -1: 토마토 x
                if (board[i][j][k] == 1) // 익은 토마토는  
                    q.push({i,j,k}); // 싹다 큐에 푸 push
                if (board[i][j][k] == 0) // 익지않은 토마토라면
                    dis[i][j][k] = -1; // 방문해야할 칸으로 지정
            }
        }
    }

    while (!q.empty()) {
        tuple<int, int, int> cur = q.front(); q.pop();

        for (int dir = 0; dir < 6; dir++) {
            int nx = get<0>(cur) + dx[dir];
            int ny = get<1>(cur) + dy[dir];
            int nz = get<2>(cur) + dz[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m || nz >= h || nz<0) continue;
            if (dis[nx][ny][nz] != -1) continue; // 방문했거나 익은 토마토가 아니면 패스
            dis[nx][ny][nz] = dis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
            q.push({ nx,ny,nz });
        }
    }

    int max = 0;
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (dis[i][j][k] == -1) {
                    cout << -1;
                    return 0;
                }
                if (max < dis[i][j][k]) max = dis[i][j][k];
            }
        }
    }
    cout << max;
    return 0;
}
