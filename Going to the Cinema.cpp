#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int niz[n];
		for (int i = 0; i < n; i++) cin >> niz[i];
		sort(niz, niz + n);
		int sol = 0;
		if (niz[0] != 0) sol++;
		for (int i = 0; i < n; i++)
		{
				if (i == n - 1)
				{
					if (i - niz[i] >= 0) sol++;
					break;
				}
				if (i - niz[i] >= 0 && i + 1 < niz[i + 1]) sol++;
		}
		cout << sol << endl;
	}
}
