#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
	{
        int a, b; cin >> a >> b;
        int n = 2 * (a - b);
        cout << n << endl;
        int niz[n];
        int ptr = 0;
        for (int i = b; i <= a; i++)
        {
        	niz[ptr++] = i;
		}
		for (int i = a - 1; i > b; i--)
		{
			niz[ptr++] = i;
		}
		for (int i = 0; i < n; i++) cout << niz[i] << " ";
		cout << endl;
    }
    return 0;
}
