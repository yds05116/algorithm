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

int arr[100005];
bool cnt[2000005];

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, x;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x; // 합이 될 수
    for (int i = 0; i < n; i++) {
        if (x-arr[i] > 0 && cnt[x - arr[i]]) ans++;
        cnt[arr[i]] = true;
    }
    cout << ans;
    return 0;
}
