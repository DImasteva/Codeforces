#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int l8 = 0;
	for (int i = 0; i < n; i++)
	{
		char c; cin >> c;
		if (c == '8') l8++;
	}
	int score = 0;
	while(n >= 11 && l8 > 0)
	{
		n--, l8--;
		n -= 10;
		score++;
	}
	cout << score;
}
