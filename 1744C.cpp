#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		char c;
		cin >> n >> c;
		string s1;
		cin >> s1;
		s1 += s1;
		int max = INT_MIN;
		for (int i = 0; i < s1.size(); i++)
		{
			if (s1[i] == c)
			{
				int br = 0;
				while(s1[i] != 'g' && i < s1.size())
				{
					br++;
					i++;
				}
				if (br > max) max = br;
			}
		}
		cout << max << endl;
	}
}
