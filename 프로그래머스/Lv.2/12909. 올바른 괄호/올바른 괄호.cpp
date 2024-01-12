#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int length = s.length();
    stack <int> st;
    for(int i=0; i<length; i++){
        if(s[i] == ')'){
            if(st.empty()) { // 스택 비어있을 때 들어오면 바로 end
                answer = false;
                break;
            }
            else {
                st.pop();
            }
        }
        if(s[i] == '('){
            st.push(i);
        }
    }
    if(!st.empty()) answer = false;
    return answer;
}