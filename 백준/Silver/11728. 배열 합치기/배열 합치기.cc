#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;
int a1[1000005];
int b1[1000005];
int c1[1000005];

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < a; i++) cin >> a1[i];
    for (int i = 0; i < b; i++) cin >> b1[i];
    int aidx = 0, bidx = 0;
    for (int i = 0; i < a + b; i++) {
        if (aidx == a) c1[i] = b1[bidx++];
        else if (bidx == b) c1[i] = a1[aidx++];
        else if (a1[aidx] <= b1[bidx]) c1[i] = a1[aidx++];
        else c1[i] = b1[bidx++];
    }
    for (int i = 0; i < a + b; i++) cout << c1[i] << " ";
    return 0;
}
