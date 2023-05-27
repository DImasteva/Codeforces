#include <iostream>
using namespace std;
int main()
 {
    int t; cin >> t;
    while(t--)
    {
    	int n; cin >> n;
    	string s; cin >> s;
    	int sol = 0;
    	for (int i = 1; i < n; i++)
    	{
    		bool dal = 1;
    		string pomoc;
    		pomoc += s[i - 1];
    		pomoc += s[i];
    		for (int j = 1; j < i + 1; j++)
    		{
    			if (j == i) continue;
    			string cmp;
    			cmp += s[j - 1];
    			cmp += s[j];
    			if (pomoc == cmp) dal = 0;
			}
			if (dal) sol++;
		}
		cout << sol << endl;
	}
}
