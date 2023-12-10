#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int a[100005];
long long s[100005];

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;
        cout << s[end] - s[start-1] << "\n";
    }
    return 0;
}
  