#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		set <int> s;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			s.insert(c);
		}
		if (s.size() == 2)
		{
			cout << n / 2 + 1 << endl;
		} else cout << n << endl;
	}	
}
