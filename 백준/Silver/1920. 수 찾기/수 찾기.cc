#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int arr[100001];
int arr2[100001];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	for (int i = 0; i < m; i++) {
		int ans = arr2[i];
		bool flag = false;
		int st = 0, en = n-1;
		while (en >= st) {
			int mid = (st + en) / 2;
			if (arr[mid] == ans)
			{
				cout << 1 <<'\n';
				flag = true;
				break;
			}
			else if (arr[mid] < ans) {
				st = mid+1;
			}
			else
				en = mid-1;
		}
		if (!flag) cout << 0 << '\n';
	}
	return 0;
}
