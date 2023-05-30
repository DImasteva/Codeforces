#include <iostream>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int vel[26] = {0}, mal[26] = {0};
		for (int i = 0; i < n; i++)
		{
			char c; cin >> c;
			if (int(c) >= 97) mal[c - 'a']++;
			else vel[c - 'A']++;
		}
		int sol = 0, i = 0;
		for(int i = 0; i < 26; i++){
        int pairs = min(mal[i], vel[i]);
        sol += pairs;
        mal[i] -=pairs; vel[i] -= pairs;
        int add = min(k, max(mal[i], vel[i]) / 2);
        k -= add; sol += add;
    }
		cout << sol << endl;
	}
}
