#include<iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int num = 0;
	int i = 0;
	for(int i=0; i<str.length(); i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=')
				i++;
			else if (str[i + 1] == '-')
				i++;
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-')
				i++;
			else if (str[i + 1] == 'z'&&str[i + 2] == '=')
				i += 2;
		}
		else if (str[i] == 'l') {
			if (str[i + 1] == 'j') 
				i++;
		}
		else if (str[i] == 'n') {
			if (str[i + 1] == 'j')
				i++;
		}
		else if (str[i] == 's') {
			if (str[i + 1] == '=') 
				i++;
		}
		else if (str[i] == 'z') {
			if (str[i + 1] == '=')
				i++;
		}
		num++;
	}
    cout<<num;
}
