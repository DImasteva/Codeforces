#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c; cin >> a >> b >> c;
	if (c == 0 && a == b) {cout << "YES";return 0;}
	if (c == 0 && a != b) {cout << "NO"; return 0;}
	if (a < b) while (a < b) a+=c;
	else while(a > b) a +=c;
	cout << ((a == b)? "YES": "NO");
}
