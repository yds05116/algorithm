#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int a[1025][1025];
long long s[1025][1025];

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for(int i=1; i<= n; i++)
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> a[i][j];
            s[i][j] = s[i][j - 1] + s[i-1][j] - s[i-1][j-1] + a[i][j];
        }
    for (int i = 0; i < m; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << s[x2][y2] - s[x1-1][y2] - s[x2][y1-1] + s[x1-1][y1-1] << "\n";
    }
    return 0;
}
  