#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, c; cin >> n >> c;
		int niz[n];
		for (int i = 0; i < n; i++)
		{
			cin >> niz[i];
			niz[i] += i + 1;
		}
		sort(niz, niz + n);
		int sol = 0;
		for (int i = 0; c >= niz[i] && i < n; i++)
		{
			c -= niz[i];
			sol++;
		}
		cout << sol << endl;
	}
}
