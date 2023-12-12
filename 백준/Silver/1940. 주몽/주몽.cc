#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;
int arr[15001];
int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n, num;
    cin >> n >> num; // num: 고유 번호


    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr,arr+n);

    int st = 0, en = n-1;
    int cnt = 0;

    while (st < en) {
        if (st == en) continue;
        int sum = arr[st] + arr[en];
        if (sum < num) {
            st++;
        }
        else if (sum > num) en--;
        else {
            st++;
            en--;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
