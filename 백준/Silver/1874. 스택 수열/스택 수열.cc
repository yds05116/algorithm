#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	stack <int> s;
	int x;
	int i = 0;
	int t;

	string st;
	cin >> t;
	while (t--)
	{
		cin >> x;
		if (x > i)
		{
			while (x > i)
			{
				s.push(++i);
				st += '+';
			}
			s.pop();
			st += '-';
		}
		else
		{
			bool flag = false;
			if(!s.empty())
			{
				int top = s.top();
				s.pop();
				st += '-';
				if (top == x)
					flag = true;
			}	
			if (!flag)
			{
				cout << "NO";
				return 0;
			}
		}
		
		
	}

	int sz = st.size();
	for (int i = 0; i < sz; i++)
		cout << st[i] << '\n';

	return 0;
}