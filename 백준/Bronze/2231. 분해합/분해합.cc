#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int m=0;
	int tmp,ans;
	bool flag = false;
	for (int i = 0; i < n; i++) {
		int sum = 0; // 자릿수의 합
		tmp = i; // i 보관
		while (tmp != 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		m = sum + i;
		if (m == n) {
			flag = true;
			ans = i;
			break;
		}
	}
	if (flag)
		cout << ans;
	else
		cout << 0;
	return 0;
}