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
#define ll long long
ll arr[100001];
ll sum[100001]; // s[i]는 arr[0~i]까지의 합
int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, s;
    cin >> n >> s; // n: 배열 길이, s: 부분합
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
   
    sum[0] = 0;
    sum[1] = arr[1];
   
    for (int i = 2; i <= n; i++) {
        sum[i] = sum[i - 1] + arr[i];
    }
    int min = 100005;
    int st = 1, en = 1;
    while (st <= en && en <= n) {
        ll tmp = sum[en] - sum[st-1]; // st부터 en까지의 합
        if (tmp >= s) {
            if (en - st + 1 < min)min = en - (st-1);
            st++;
        }
        else {
            en++;
        }
    }
    if (min == 100005) cout << 0;
    else cout << min;
    return 0;
}
