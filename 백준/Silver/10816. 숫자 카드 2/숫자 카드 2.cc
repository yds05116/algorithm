#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;
int n,m;
int arr[500001];

int min_idx(int target) {
    int st = 0, en = n;// 마지막에 삽입될 위치 추가해야하므로 en = n-1이 아닌 n
    while (st < en) {
        int mid = (st + en) / 2;
        if (arr[mid] >= target)en = mid;
        else st = mid + 1;
    }
    return st; // mid, en 리턴해도 상관없음
}

int max_idx(int target) {
    int st = 0, en = n;// 마지막에 삽입될 위치 추가해야하므로 en = n-1이 아닌 n
    while (st < en) {
        int mid = (st + en) / 2;
        if (arr[mid] > target) en = mid;
        else st = mid + 1;
    }
    return st; // mid, en 리턴해도 상관없음
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n); // 이분 탐색을 위해 오름차순 정렬
    cin >> m;
    while (m--) {
        int find;
        cin >> find;
        cout << max_idx(find) - min_idx(find) << " ";
    }
    return 0;
}
