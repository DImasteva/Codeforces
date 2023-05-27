// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        int max = 0, br = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                if (br > max) max = br;
                br = 1;
            } else br++;
        }
        if (br > max) max = br;
        cout << max + 1<< endl;
    }
 
    return 0;
}
