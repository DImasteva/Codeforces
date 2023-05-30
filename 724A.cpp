#include <iostream>
#include <math.h>
using namespace std;
int check(string s)
{
	if (s == "monday") return 1;
	else if (s == "tuesday") return 2;
	else if (s == "wednesday") return 3;
	else if (s == "thursday") return 4;
	else if (s == "friday") return 5;
	else if (s == "saturday") return 6;
	else return 7;
}
int main()
{
	string s1, s2; cin >> s1 >> s2;
	int b1 = check(s1), b2 = check(s2);
	if (b1 == b2 || (b1 + 3) % 7 == b2 % 7 || (b1 + 2) % 7 == b2 % 7) cout << "YES";
	else cout << "NO";
	int months[] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
}
