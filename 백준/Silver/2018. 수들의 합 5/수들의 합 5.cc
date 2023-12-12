#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int n;
    cin >> n;
    int cnt = 1, sum = 1, st = 1, en = 1;
    while (en != n) {
        if (sum < n) {
            en++;
            sum += en;
        }
        else if (sum > n) {
            sum -= st;
            st++;
        }
        else { // sum == n
            en++;
            sum += en;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
