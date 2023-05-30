#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, t;
    cin >> n >> t;
    vector<long long int> niz(n);
    for (int i = 0; i < n; i++) {
        cin >> niz[i];
    }
    long long int score = 0, sum = 0;
    long long int l = 0;
    for (long long int r = 0; r < n; r++) {
        sum += niz[r];
        while (sum > t) {
            sum -= niz[l];
            l++;
        }
        score = max(score, r - l + 1);
    }
    cout << score;
}
