
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m, s; cin >> m >> s;
	if ((s == 0 && m != 1) || (m * 9 < s)) {cout << -1 << " " << -1; return 0;}
	int veci[m] = {0};
	int temp = s, i = 0;
	while(temp >= 9)
	{
		veci[i++] = 9;
		temp -= 9;
	}
	veci[i] = temp;
	int manji[m] = {0}, temp2 = s, j = m - 1;
	while(temp2 > 9)
	{
		manji[j--] = 9;
		temp2 -= 9;
	}
	if (j != 0)
	{
		manji[j] = temp2 - 1;
		manji[0] = 1;
	} else manji[j] = temp2;
	for (int i = 0; i < m; i++) cout << manji[i];
	cout << " ";
	for (int i = 0; i < m; i++) cout << veci[i];
}
