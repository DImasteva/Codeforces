#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, n1 = 1; cin >> n;
	string s1, s2;
	cin >> s1;
	for (int i = 1; i < n; i++)
	{
		string s; cin >> s;
		if (s1 == s) n1++;
		else s2 = s;
	}
	(n - n1 > n1)? cout << s2: cout << s1;
}
