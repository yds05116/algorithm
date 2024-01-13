#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int scores[301];
int dp[301][3];
int main()
{
	int stairs;
	cin >> stairs;
	for (int i = 1; i <= stairs; i++)
		cin >> scores[i];

	if (stairs == 1) {
		cout << scores[1];
		return 0;
	}
	
	dp[1][1] = scores[1];
	dp[1][2] = 0;
	dp[2][1] = scores[2];
	dp[2][2] = scores[1] + scores[2];
	
	for (int i = 3; i <= stairs; i++) {
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + scores[i];
		dp[i][2] = dp[i - 1][1] + scores[i];
	}
	cout << max(dp[stairs][1], dp[stairs][2]);
	return 0;
}
