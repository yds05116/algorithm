#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int e, s, m;
	cin >> e >> s >> m;
	int x = 0;
	e--;
    s--;
    m--;
	while (!(x % 15 == e && x % 28 == s && x % 19 == m))
	{
		x++;
	}
	cout << x+1;
	return 0;
}