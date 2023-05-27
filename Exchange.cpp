#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, a, b, ans = 0;
		cin >> n >> a >> b;
		if (a > b) cout << 1 << endl;
		else (n%a==0)? cout << n / a << endl: cout << n / a + 1 << endl;
	}	
}
