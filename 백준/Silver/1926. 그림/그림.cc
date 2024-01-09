#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <queue>
#include <deque>
using namespace std;

int board[501][501];
bool vis[501][501];

#define X first
#define Y second

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int main(void)
{
	cin.tie(0);
	cin.sync_with_stdio(0); 
	int n, m;
	int cnt = 0;
	int max = 0;
	cin >> n >> m;
	queue <pair<int,int>> q;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> board[i][j];// 그림 입력


	for(int i=0; i<n; i++)
		for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 1 && vis[i][j] != 1)
				{
					int width = 0;
					cnt++;
					q.push({ i,j });
					vis[i][j] = 1;
					
					while (!q.empty())
					{
						width++;
						pair <int, int> cur = q.front(); q.pop();
						for (int k = 0; k < 4; k++)
						{	
							int nx = cur.X + dx[k];
							int ny = cur.Y + dy[k];
							if (nx < 0 || ny < 0 || nx >= n || ny >= m)continue;
							if (vis[nx][ny] || board[nx][ny] != 1)continue;
							vis[nx][ny] = 1;
							q.push({ nx,ny });
						}
					}
					if (max < width) max = width;
				}
			}
		cout << cnt << '\n' << max;
	return 0;
}