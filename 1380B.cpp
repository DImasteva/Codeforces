#include <iostream>
#include <math.h>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
   int t; cin >> t;
   while(t--)
   {
        string s; cin >> s;
        int n = s.length();
        string h;
        int p = 0, k = 0, m = 0;
        for (int i = 0; i < n; i++)
        {
            switch(s[i])
            {
                case 'R': k++; break;
                case 'P': p++; break;
                case 'S': m++; break;
            }
        }
        int maxi = max(p, k);
        maxi = max(maxi, m);
        if (maxi == p) for (int i = 0; i < n; i++) cout << 'S';
        else if (maxi == m) for (int i = 0; i < n; i++) cout << 'R';
        else for (int i = 0; i < n; i++) cout << 'P';
        cout << endl;
   }
}
