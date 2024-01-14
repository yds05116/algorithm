#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;


bool prime(int num){
    if(num == 0 || num == 1) return false;
    for(int i=2; i*i<=num; i++){
        if(num%i==0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    int len = numbers.size();
    unordered_set<int> uniquePrimes;
     sort(numbers.begin(), numbers.end());
    do {
        string temp;
        for(int i=0; i<len; i++){
            temp += numbers[i];
            if(prime(stoi(temp))) {
                uniquePrimes.insert(stoi(temp));
            }
        }
    } while(next_permutation(numbers.begin(), numbers.end()));

    answer = uniquePrimes.size();
    return answer;
}