#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string s;
    for (int i = 0; i < n; i++)
    {
    	char c; cin >> c;
    	switch(c)
    	{
    		case'2': s+= '2'; break;
    		case'3': s+= '3'; break;
    		case'4': s+= "322"; break;
    		case'5': s+= '5'; break;
    		case'6': s+= "53"; break;
    		case'7': s+= '7'; break;
    		case'8': s+= "7222"; break;
    		case'9': s+= "7332"; break;
		}
	}
	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());
	cout << s;
}
