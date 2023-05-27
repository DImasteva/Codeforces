#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
    	long long int n, m; cin >> n >> m;
    	bool yn = false;
    	if (n % 2 == m % 2 && m * m <= n) yn = true;
    	if (n % 2 == 1 && m == 1) yn = true;
    	(yn)? cout << "YES": cout << "NO";
    	cout << endl;
	}
}
