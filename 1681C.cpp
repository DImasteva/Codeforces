#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
 
        vector<int> tmp(n);
        for (int i = 0; i < n; i++) {
            tmp[i] = i;
        }
 
        sort(tmp.begin(), tmp.end(), [&](int i, int j) {
            return make_pair(a[i], b[i]) < make_pair(a[j], b[j]);
        });
 
        bool possible = true;
        for (int i = 0; i < n - 1; i++) {
            if (a[tmp[i]] > a[tmp[i + 1]] || b[tmp[i]] > b[tmp[i + 1]]) {
                possible = false;
                cout << "-1\n";
                break;
            }
        }
 
        if (possible) {
            vector<pair<int, int>> ans;
            for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - 1; j++) {
                    if (a[j] > a[j + 1] || b[j] > b[j + 1]) {
                        swap(a[j], a[j + 1]);
                        swap(b[j], b[j + 1]);
                        ans.push_back({j + 1, j + 2});
                    }
                }
            }
 
            cout << ans.size() << "\n";
            for (auto it : ans) {
                cout << it.first << " " << it.second << "\n";
            }
        }
    }
 
    return 0;
}
