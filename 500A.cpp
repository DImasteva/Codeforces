#include <iostream>
using namespace std;
int main()
{
	int n, m; cin >> n >> m; n--;
	int niz[n];
	for (int i = 0; i < n; i++) cin >> niz[i];
	int itr = 0;
	m--;
	while(itr <= m)
	{
		if (itr == m)
		{
			cout << "YES"; return 0;
		} else itr += niz[itr];
	}
	cout << "NO";
}
