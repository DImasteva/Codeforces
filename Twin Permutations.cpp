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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int niz[n]; for (int i = 0; i < n; i++)
        {
            cin >> niz[i];
            niz[i] = n - niz[i] + 1;
        }
        for (int i = 0; i < n; i++) cout << niz[i] << " ";
        cout << endl;
    }
}
