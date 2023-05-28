#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, res = 0, ans = 0;
		cin >> n;
		int niz1[n];
		cin >> niz1[0];
		res = niz1[0];
		for (int i = 1; i < n; i++)
		{
			cin >> niz1[i];
			res = __gcd(niz1[i], res);
		}
		if (res == 1) ans = 0;
		else if (__gcd(res, n) == 1) ans = 1;
		else if (__gcd(res, n - 1) == 1) ans = 2;
		else ans = 3;
		cout << ans << endl;
	}
}
