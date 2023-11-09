#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>

using namespace std;

int room[1'000'001]; // 0으로 자동 초기화 / idx: 성적, value: 해당 성적을 맞은 학생 수

int main(void)
{
    double n, B, C;
    long long supervisors = 0; // 최악의 경우 고려
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> room[i];
    }
    cin >> B >> C;
    
    for (int i = 0; i < n; i++)
    {
        room[i] -= B;
        supervisors++;
        if (room[i]>0) {
            supervisors += ceil(room[i] / C);
        } // 총 감독관이 관리 할 수 있는 지원자수가 시험장의 지원자 수보다 적으면 총감독 한명 배치하고 나머지는 부 감독   
    }
    cout << supervisors;
    return 0;
}