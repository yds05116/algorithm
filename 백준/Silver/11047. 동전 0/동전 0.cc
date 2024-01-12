#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	int temp = 0;
	cin >> n >> k;
	vector <int> v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}
	for (int i = 1; i < n+1; i++)
	{
		if (v[n - i] <= k)//v[n-1]부터v[0]까지
		{
			temp += k / v[n - i];
			k %= v[n - i];
		}
	}
	cout << temp;
	return 0;
}