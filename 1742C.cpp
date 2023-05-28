#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int sol = 0;
		for (int i = 0; i < 8; i++)
		{
			int br = 0;
			for (int j = 0; j < 8; j++)
			{
				char c;
				cin >> c;
				if (c == 'R') br++;
				else br = 0;	
			}
			if (br == 8) sol = 1;
		}
		if (sol == 1) cout << 'R' << endl;
		else cout << 'B' << endl;
	}	
}
