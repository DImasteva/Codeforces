#include <iostream>
#include <math.h>
#include <algorithm>
typedef long long ll;
using namespace std;
int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for (int &x:a) cin >> x;
        int i = 0, j = n - 1;
        int z1 = 0, z2 = 0;
        int sol = 0;
        while(i <= j)
        {
            if (z1 == z2)
                sol = i + n - j - 1;
            if (z1 < z2)
                z1 += a[i++];
            else
                z2 += a[j--];
        }
        if (z1 == z2)
                sol = i + n - j - 1;
        cout << sol << endl;
    }
}
