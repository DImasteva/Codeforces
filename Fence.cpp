#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, sol = 0; cin >> n >> k;
    int zb = 0, min = 0, j = 0, niz[n];
    for (int i = 0; i < k; i++)
    {
    	cin >> niz[i]; zb += niz[i];
	}
	min = zb;
    for (int i = k; i < n; i++)
    {
    	cin >> niz[i];
    	zb = zb - niz[j] + niz[i];
    	if (zb < min)
    	{
    		min = zb;
    		sol = j + 1;
		}
		j++;
	}
	cout << sol + 1;
}
