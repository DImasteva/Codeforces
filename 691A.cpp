#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int num = 0;
	for (int i = 0; i < n; i++)
	{
		int c; cin >> c;
		if (c == 0) num++;
	}
	if (n == 1)
	{
		if (num == 0) cout << "YES";
		else cout << "NO";
		return 0;
	}
	if (num != 1) cout << "NO";
	else cout << "YES";
}
