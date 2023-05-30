#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int niz[n], check[n] = {0}, sol[n], g = 0, dal = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> niz[i];
			check[niz[i] - 1]++;
		}
		int j = 0;
		sol[g] = niz[0]; g++;
		check[niz[0] - 1] = -1;
		for (int i = 1; i < n; i++)
		{
			if (niz[i] == niz[i - 1])
			{
				for (; j < n; j++)
				{
					if (j == i) {dal = 1; break;}
					if (check[j] == 0)
					{
						sol[g] = j + 1; g++;
						check[j] = -1;
						break;
					}
				}
			} else
			{
				sol[g] = niz[i]; g++;
				check[niz[i] - 1] = -1;
			}
			if (dal == 1) {cout << -1; break;}
		}
		if (dal != 1)
		{
			for (int i = 0; i < n; i++)
			{
				cout << sol[i] << " ";
			}
		}
		cout << endl;
	}
}
