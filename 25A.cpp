#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
   int n; cin >> n;
   int niz[n]; for (int& x:niz) cin >> x;
   int par = 0, nepar = 0;
   for (int i = 0; i < 3; i++)
   {
    if (niz[i] % 2 == 0) par++;
    else nepar++;
   }
   if (par > nepar)
   {
    for (int i = 0; i < n; i++)
    {
        if (niz[i] % 2 == 1) {cout << i + 1; return 0;}
    }
   } else if (nepar > par)
   {
    for (int i = 0; i < n; i++)
    {
        if (niz[i] % 2 == 0) {cout << i + 1; return 0;}
    }
}
}
