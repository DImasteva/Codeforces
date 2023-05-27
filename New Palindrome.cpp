#include <iostream>
using namespace std;
 
int main()
{
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int niz[26] = {0};
		for (int i = 0; i < s.length(); i++)
		{
			niz[s[i] - 'a']++;
		}
		int sol = 0;
		for (int i = 0; i < 26; i++)
		{
			if (niz[i] >= 2)sol++;
		}
		if (sol < 2) cout << "NO";
		else cout << "YES";
		cout << endl;
	}
}
