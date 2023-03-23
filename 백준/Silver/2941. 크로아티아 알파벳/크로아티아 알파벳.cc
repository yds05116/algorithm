#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-')
				i++;
		}

		else if (s[i] == 'd') {
			if (s[i + 1] == '-')
				i++;
			else if (s[i + 1] == 'z' && s[i + 2] == '=')
				i += 2;
		}

		else if (s[i] == 'l' || s[i] == 'n') {
			if (s[i + 1] == 'j')
				i++;
		}

		else if (s[i] == 's' || s[i] == 'z') {
			if (s[i + 1] == '=')
				i++;
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}