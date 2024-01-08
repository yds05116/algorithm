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
    int n, x;
    cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.emplace_back(x);
    }

    // 버블 정렬
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << "\n";
    }


    return 0;
}
