#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	if (n == 0 && m != 0) cout << "Impossible";
	else if (n == 0 && m == 0) cout << 0 << " " << 0;
	else
	{
		long long int sol = n - 1 + m;
		if (m == 0) cout << n << " " << n;
		else if (m > n) cout << m << " " << sol;
		else cout << n << " " << sol;
	}
}
