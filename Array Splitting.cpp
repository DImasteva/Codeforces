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
   int n, k; cin >> n >> k;
   int niz[n]; for (int i = 0; i < n; i++) cin >> niz[i];
   vector <int> raz;
   for (int i = 1; i < n; i++) raz.push_back(niz[i - 1] - niz[i]);
   sort(raz.begin(), raz.end());
    ll sum = niz[n - 1] - niz[0];
   for (int i = 0; i < k - 1; i++) sum += raz[i];
   cout << sum;
   return 0;
}
