#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int niz[n];
	char str[n];
	for (int g = 0; g < n; g++) cin >> str[g];
	for (int g = 0; g < n; g++) cin >> niz[g];
	int raz = INT_MAX;
	for (int i = 1; i < n; i++)
	{
		if (str[i] == 'L' && str[i - 1] == 'R')
		{
			if (niz[i] - niz[i - 1] < raz) raz = niz[i] - niz[i - 1];
		}
	}
	if (raz == INT_MAX) cout << -1;
	else cout << raz / 2;
}
