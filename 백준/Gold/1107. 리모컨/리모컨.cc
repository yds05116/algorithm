#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

bool broken[10];

int possible(int c) {
	if (c == 0) 
		return broken[0] ? 0 : 1; // 가야할 채널이 0인 경우 0이 고장 시 return 0,안 고장시 한 방에 0으로
	int len = 0; // 버튼을 누르는 횟수
	while (c > 0) {
		if (broken[c % 10]) return 0; // 고장난 버튼이있으면 해당 채널 못감
		len++;
		c /= 10;
	}
	return len; // 고장난 버튼 포함 안한 채널의 버튼 누르는 횟수
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int btn;
		cin >> btn;
		broken[btn] = true; // true는 고장
	}

	int ans = n - 100;
	if (ans < 0) //가야되는 채널이 100 미만일 경우
		ans = -ans;

	for (int i = 0; i <= 1000000; i++)
	{
		int c = i;
		int len = possible(c);
		if (len > 0)
		{
			int press = c - n; // + 누르는 횟수
			if (press < 0)
				press = -press; // -를 +로
			if (ans > len + press) // len + press == c
				ans = len + press; // 해당 채널까지 가면 stop
		}
	}
	cout << ans;
	return 0;
}
