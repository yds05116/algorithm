#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    cin.tie(0);
    cout.tie(0);
    cout.sync_with_stdio(false);
    int T;
    cin >> T; 
    for(int tc =1; tc<=T; tc++){
        int student, ans;
        cin >> student >> ans;
        vector<pair<int,int>> v;
        for (int i = 1; i <= student; i++) {
            int midterm, finalterm, assignment;
            cin >> midterm >> finalterm >> assignment;
            v.push_back({ 35 * midterm + 45 * finalterm + 20 * assignment,i });
        }
        sort(v.begin(), v.end()); 
        for (int i = 1; i <= student; i++) {
            if (v[i].second == ans) {
                int rate = (double)i/ student * 100;
                if (rate < 10)
                    cout << "#" << tc << " " << "D0" << endl;
                else if (rate < 20)
                    cout << "#" << tc << " " << "C-" << endl;
                else if (rate < 30)
                    cout << "#" << tc << " " << "C0" << endl;
                else if (rate < 40)
                    cout << "#" << tc << " " << "C+" << endl;
                else if (rate < 50)
                    cout << "#" << tc << " " << "B-" << endl;
                else if (rate < 60)
                    cout << "#" << tc << " " << "B0" << endl;
                else if (rate < 70)
                    cout << "#" << tc << " " << "B+" << endl;
                else if (rate < 80)
                    cout << "#" << tc << " " << "A-" << endl;
                else if (rate < 90)
                    cout << "#" << tc << " " << "A0" << endl;
                else
                    cout << "#" << tc << " " << "A+" << endl;
                break;
            }
        }
    }
    return 0;
}
