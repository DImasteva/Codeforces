#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	long long int poz[n]; for (int i = 0; i < n; i++) cin >> poz[i];
	vector <int> niz;
	for (int i = 0; i < n; i++)
	{
		long long int c; cin >> c;
		niz.push_back(poz[i] - c);
	}
	sort(niz.begin(), niz.end());
	long long int sol = 0;
	for (int i = 0; i < n; i++)
	{
		if (niz[i] <= 0) continue;
		int pos = lower_bound(niz.begin(), niz.end(), -niz[i] + 1) - niz.begin();
		sol += i - pos;
	}
	cout << sol;
}
