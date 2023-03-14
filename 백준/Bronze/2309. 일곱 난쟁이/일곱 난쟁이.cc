#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n[9]; 
	int sum = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> n[i];
		sum += n[i];
	}
	sort(n, n + 9);
	int ans = sum - 100;
	for(int i=0; i<9; i++)
		for (int j = i + 1; j < 9; j++)
		{
			if (n[i] + n[j] == ans)
			{
				for (int k = 0; k < 9; k++)
				{
					if (k == i || k == j)continue;
					cout << n[k] << '\n';
					
				}
				return 0;
			}
		}
	return 0;	
}