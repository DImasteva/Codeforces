#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int niz[n], zbir = 0;
	for (int i = 0; i < n; i++) cin >> niz[i];
	int t, min = INT_MAX;
	for (int i = 1; i <= 100; i++)
	{
		int temp = 0;
		for (int j = 0; j < n; j++)
		{
			int d = abs(niz[j] - i);
			if (d >= 1) temp += d - 1;
		}
		if (temp < min)
		{
			t = i;
			min = temp;
		}
	}
	cout << t << " " << min;
}
