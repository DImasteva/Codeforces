#include <iostream>
using namespace std;
long long int getscore(long long x, long long y)
{
	if (x % y == 0) return x / y;
	else return x / y + 1;
	
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long int hc, dc; cin >> hc >> dc;
		long long int hm, dm; cin >> hm >> dm;
		long long int k, w, a; cin >> k >> w >> a;
		hc += k * a;
		long long int sc = getscore(hm, dc), sm = getscore(hc, dm);
		for (int i = 0; i < k && sc > sm; i++)
		{
			hc -= a;
			dc += w;
			sc = getscore(hm, dc);
			sm = getscore(hc, dm);
		}
		(sc <= sm)? cout << "YES" << endl: cout << "NO" << endl;
	}
}
