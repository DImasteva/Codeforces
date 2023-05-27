#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		long long int niz[n], sum = 0; for (int i = 0; i < n; i++) {cin >> niz[i]; sum+=niz[i];}
		long long int itr = n - 1;
		long long int sol = 0;
		while(itr != 0)
		{
			sum -= niz[itr];
			long long int k2 = 100 * niz[itr], sum2 = sum * k;
			if (sum2 < k2)
			{
				long long int br = abs(sum2 - k2);
				if (br % k == 0)
				{
					sol += br / k;sum += abs(sum2 - k2) / k;	
				} else
				{
					sol += br / k + 1;sum += abs(sum2 - k2) / k + 1;
				}
			}
			itr--;
		}
		cout << sol << endl;
	}
}
