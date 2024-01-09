#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <queue>
#include <deque>
using namespace std;

string board[102];
int dis[102][102];

#define X first
#define Y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void)
{
	cin.tie(0);
	cin.sync_with_stdio(0); 
	int n, m;
	cin >> n >> m;
	queue <pair<int,int>> q;
	for (int i = 0; i < n; i++)
			cin >> board[i];// 그림 입력

	for (int i = 0; i < n; i++)fill(dis[i], dis[i] + m, -1);
	//거리 모두 -1로 초기화
	q.push({ 0,0 });
	dis[0][0] = 0;
	while (!q.empty())
	{
		pair <int,int> cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
			if (dis[nx][ny]>=0 || board[nx][ny] != '1')continue;
			dis[nx][ny] = dis[cur.X][cur.Y]+1; // 거리 1증가
			q.push({ nx,ny });
		}
	}
	cout << dis[n - 1][m - 1] + 1;
	return 0;
}