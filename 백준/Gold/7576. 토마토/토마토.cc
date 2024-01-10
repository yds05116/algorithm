#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define X first 
#define Y second

int board[1001][1001];
int dis[1001][1001]; // 0 아니면 방문

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, m;
    queue <pair<int, int>> q;
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j]; // 1: 익은 토마토 0: 익지 않은 토마토, -1: 토마토 x
            if (board[i][j] == 1) // 익은 토마토는  
                q.push({ i,j }); // 싹다 큐에 푸 push
            if (board[i][j] == 0) // 익지않은 토마토라면
                dis[i][j] = -1; // 방문해야할 칸으로 지정
        }
    }

    while (!q.empty()) {
        pair<int, int> cur = q.front(); q.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if (dis[nx][ny] != -1) continue; // 방문했거나 익은 토마토가 아니면 패스
            dis[nx][ny] = dis[cur.X][cur.Y] + 1;
            q.push({ nx,ny });
        }
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (dis[i][j] == -1) {
                cout << -1;
                return 0;
            }
            if (max < dis[i][j]) max = dis[i][j];
        }
    }
    cout << max;
    return 0;
}
