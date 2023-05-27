#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
    pair <ll, ll> a[100500];
    ll n, r, avg; cin >> n >> r >> avg;
    ll sum = 0;
    for (ll i = 0; i < n; i++) {cin >> a[i].second >> a[i].first; sum += a[i].second;}
    sort(a, a + n);
    ll sol = 0, i = 0;
    while(sum < avg * n)
    {
        int tmp = min(avg * n - sum, r - a[i].second);
        sum += tmp;
        sol += tmp * a[i].first;
        i++;
    }
    cout << sol;
}
