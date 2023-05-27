#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
	unsigned long long int l1, r1, l2, r2, k; cin >> l1 >> r1 >> l2 >> r2 >> k;
	unsigned long long int x = max(l1, l2), y = min(r1, r2);
	long long int sol = y - x + 1;
	if (k >= x && k <= y) sol--;
	if (sol < 0) cout << 0;
	else cout << sol;
}
