
#include <iostream>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, dal = 0, sum = 0;
		cin >> n;
		int niz[n];
		for (int i = 0; i < n; i++)
		{
			cin >> niz[i];
			sum += niz[i];
		}
		if (sum == n)
		{
			cout << sum - 4 << endl;
			continue;
		}
		for (int i = 0; i < n; i++)
		{
			if (niz[i] == -1 && niz[i + 1] == - 1)
			{
				dal = 1;
				break;
			}
		}
		if (dal == 1) cout << sum + 4 << endl;
		else cout << sum << endl;
	}
}
