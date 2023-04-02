#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>

using namespace std;

int arr[1000005];
int n, c;
bool solve(int x) {
	long long cur = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] -x > 0)
			cur += arr[i] - x;
	}
	return cur >= c;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> c;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	long long left = 0;
	long long right = 0x7fffffff;
	while (left < right)
	{
		long long mid = (left + right + 1) / 2;
		if (solve(mid)) left = mid;
		else right = mid - 1;
	}
	cout << left;
	return 0;
}
