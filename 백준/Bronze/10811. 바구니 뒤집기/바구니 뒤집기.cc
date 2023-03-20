#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int arr[101];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		arr[i] = i+1;

	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		reverse(arr+(x-1), arr+y);
	}


	for (int i = 0; i < n; i++)
		cout<< arr[i] << " ";

	return 0;
}
