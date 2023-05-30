#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long int n; cin >> n;
		long long int niz[n], max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			cin >> niz[i];
			if (i == 0 || i == n - 1) continue;
			if (niz[i] > max) max = niz[i];
		}
		if ((n == 3 && niz[1] % 2 == 1) || max == 1)
		{
			cout << -1 << endl; continue;
		}
		else
		{
			long long int sol = 0;
			for (int i = 1; i < n - 1; i++)
			{
				sol += niz[i] / 2;
				if (niz[i] % 2 != 0) sol++;
			}
			cout << sol << endl;
		}
	}
}
