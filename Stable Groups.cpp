#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, k, x; cin >> n >> k >> x;
	long long int niz[n]; for (int i = 0; i < n; i++) cin >> niz[i];
	sort(niz, niz + n);
	vector <long long int> v1;
	for (int i = 1; i < n; i++)
	{
		long long int br = niz[i] - niz[i - 1];
		if (br > 2 * x)
		{
			if (br % x == 0) v1.push_back(br / x - 1);
			else v1.push_back(br / x);
		} 
		else if (br > x) v1.push_back(1);	
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < v1.size(); i++)
	{
		if (k - v1[i] < 0) {cout << v1.size() - i + 1; return 0;}
		else k-=v1[i];
	}
	cout << 1;
}
