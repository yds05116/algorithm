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

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int p, s, a, c, g, t;
    int cnt = 0;
    string str;
    cin >> p >> s >> str >> a >> c >> g >> t;
    //초깃값 설정
    int st = 0, en = s - 1;
    int acgt[4] = { 0, };
    for (int i = st; i <= en; i++) {
        if (str[i] == 'A') acgt[0]++;
        else if (str[i] == 'C') acgt[1]++;
        else if (str[i] == 'G') acgt[2]++;
        else if (str[i] == 'T') acgt[3]++;
    }

    if (acgt[0] >= a && acgt[1] >= c && acgt[2] >= g && acgt[3] >= t) cnt++;

    if (str[st] == 'A') acgt[0]--;
    else if (str[st] == 'C') acgt[1]--;
    else if (str[st] == 'G') acgt[2]--;
    else if (str[st] == 'T') acgt[3]--;
    st++;
    en++;

    while (en < p) {
        if (str[en] == 'A') acgt[0]++;
        else if (str[en] == 'C') acgt[1]++;
        else if (str[en] == 'G') acgt[2]++;
        else if (str[en] == 'T') acgt[3]++;
        if (acgt[0] >= a && acgt[1] >= c && acgt[2] >= g && acgt[3] >= t) cnt++;
        if (str[st] == 'A') acgt[0]--;
        else if (str[st] == 'C') acgt[1]--;
        else if (str[st] == 'G') acgt[2]--;
        else if (str[st] == 'T') acgt[3]--;
        st++;
        en++;
    }
    cout << cnt;
    return 0;
}
