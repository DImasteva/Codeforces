#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		unsigned long long int sol = 0;
		cin >> n;
		vector <int> v;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			if (c == 0 && v.size() == 0) continue;
			else if (c != 0) v.push_back(c);
			else
			{
				sort(v.begin(), v.end());
				sol += v[v.size() - 1];
				v.pop_back();
			}
		}
		cout << sol << endl;
	}
}
