#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int niz[n];
		int min = -1, max = -1;
		for (int i = 0; i < n; i++) cin >> niz[i];
		int l = 1, r = n, i = 0, j = n - 1;
		while(1)
		{
			if (niz[i] == l) {l++; i++;}
			else if (niz[j] == l) {l++; j--;}
			else if (niz[i] == r) {r--; i++;}
			else if (niz[j] == r) {r--; j--;}
			else break;
		}
		if (j - i <= 2) cout << -1 << endl;
		else cout << i + 1 << " " << j + 1 << endl;
	}
}
