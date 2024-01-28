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
int arr[100001];
int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int st = 0, en = 1;
    int min = 0x7fffffff;
    while (en < n && st <= en) {
        int tmp = arr[en] - arr[st];
        if (tmp >= m) {
            if (tmp < min) min = tmp;
            st++;
        }
        else {
            en++;
        }
    }
    cout << min;
    return 0;
}
