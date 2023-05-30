#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
   ll t; cin >> t;
   while(t--)
   {
        ll n; cin >> n;
        vector <ll> niz; for (int i = 0; i < n; i++) {int c; cin >> c; niz.push_back(c);}
        n = unique(niz.begin(), niz.end()) - niz.begin();
        ll sol = n;
        for (int i = 1; i < n - 1; i++)
        {
            if ((niz[i] >= niz[i - 1] && niz[i] <= niz[i + 1]) || (niz[i] <= niz[i - 1] && niz[i] >= niz[i + 1]))
            {
                sol--;
            }
        }
        cout << sol << endl;
   }
}
