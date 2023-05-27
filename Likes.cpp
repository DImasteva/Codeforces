#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int brp = 0, brn = 0;
		for (int i = 0; i < n; i++)
		{
			int c;
			cin >> c;
			if (c > 0) brp++;
			else brn++;
		}
		int pom = 0;
		for (int i = 1; i <= brp; i++)
		{
			cout << i << " ";
			pom = i;
		}
		--pom;
		for (int i = 0; i < brn; i++)
		{
			cout << pom << " ";
			pom--;
		}
		cout << endl;
		for (int i = 1, j = 1; i <= brp; i++)
		{
			cout << j << " ";
			j++;
			if (brn != 0)
			{
				cout << 0 << " ";
				brn--;
				j--;
			}
		}
		cout << endl;
	}
}
