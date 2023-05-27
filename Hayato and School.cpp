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
		int brp = 0, brn = 0, niz[n];
		for (int i = 0; i < n; i++)
		{
			cin >> niz[i];
			if (niz[i] % 2 == 0) brp++;
			else brn++;
		}
		if (brn >= 3)
			{
				cout << "YES" << endl;
				brn = 3;
				for (int j = 0; brn != 0; j++)
				{
					if (niz[j] % 2 == 1)
					{
						cout << j + 1 << " ";
						brn--;
					}
				}
				cout << endl;
			} else if (brp >= 2 && brn >= 1)
			{
				cout << "YES" << endl;
				brp = 2;
				brn = 1;
				for (int j = 0; brn != 0 || brp != 0; j++)
				{
					if (niz[j] % 2 == 0 && brp != 0) {cout << j + 1 << " "; brp--;}
					else if (niz[j] % 2 == 1 && brn != 0) {cout << j + 1 << " "; brn--;}
				}
				cout << endl;
			} else cout << "NO" << endl;
	}
}
