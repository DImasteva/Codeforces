#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	m--;
	int niz[n];
	for (int i = 0; i < n; i++) cin >> niz[i];
	int i = m - 1, j = m + 1, num = 0;
	if (niz[m] == 1) num++;
	while(1)
	{
		if (i == -1)
		{
			for (; j < n; j++)
			{
				if (niz[j] == 1) num++;
			}
			break;
		} else if (j == n)
		{
			for(; i >= 0; i--)
			{
				if (niz[i] == 1) num++;
			}
			break;
		}
		if (niz[i] == 1 && niz[j] == 1) num+=2;
		i--, j++;
	}
	cout << num;
}
