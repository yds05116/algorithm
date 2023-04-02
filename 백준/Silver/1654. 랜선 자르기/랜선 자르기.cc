#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int lan[10001];
int k, n;

bool solve(int x) {
    long long cur = 0;
    for (int i = 0; i < k; i++)
        cur += lan[i] / x;
    return cur >= n;
}


int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n;
    for (int i = 0; i < k; i++)
        cin >> lan[i];
    sort(lan, lan + k); // 이분탐색을 위해 오름차순 정렬
    long long st = 0, en = lan[k - 1];
    while (st < en) {
       long long mid = (st + en + 1) / 2;
       if (solve(mid)) st = mid;
       else en = mid - 1;
    }
    cout << st;
    return 0;
}
