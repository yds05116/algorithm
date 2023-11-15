#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        string s;
        cin >> s;
        int size = s.size();
        string s1, s2;
        if (size % 2 == 0) // 문자열이 짝수일 경우
        {
             s1 = s.substr(0, size/2);
             s2 = s.substr(size/2, size/2);
        }

        else {
            s1 = s.substr(0, size / 2);
            s2 = s.substr(size/2+1, size / 2);
        }
        bool flag = true;
        for (int j = 0; j < size / 2; j++) {
            if (s1[j] != s2[size / 2 - j-1]) flag = false;
        }
        if(flag)
            cout << "#" << i << " " << 1 << "\n";
        else
            cout << "#" << i << " " << 0 << "\n";

    }
return 0;
}
