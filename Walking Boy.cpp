#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, p, s, dal = 0;
		cin >> n;
		cin >> p;
		if (p >= 240) dal = 2;
		else if (p >= 120) dal++;
		for (int i = 1; i < n; i++)
		{
			cin >> s;
			if (s - p >= 240) dal = 2;
			else if (s - p >= 120) dal++;
			p = s;
		}
		if (1440 - p >= 240) dal += 2;
		else if (1440 - p >= 120) dal++;
		
		if (dal >= 2) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
