#include <iostream>
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
    int n; cin >> n;
    int niz[n]; for(int& x:niz)cin >> x;
    int mini = 0, maxi = 1e9;
    for (int i = 0; i < n - 1; i++)
    {
        int x = niz[i];
        int y = niz[i + 1];
        int L = (x + y) / 2;
        int R = (x + y + 1) / 2;
        if (x > y)
        {
            mini = max(mini, R);
        } else if (x < y)
        {
            maxi = min(maxi, L);
        }
    }
    if (mini <= maxi) cout << mini;
    else cout << -1;
    cout << endl;
   }
}
