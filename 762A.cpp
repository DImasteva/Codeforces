#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cmath>
 
using namespace std;
typedef unsigned long long llu;
 
int main(void)
{
    llu n, k, i;
    while (1)
    {
    	scanf("%llu %llu", &n, &k);
        vector <llu> v;
        for (i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                if (n / i != i)
                    v.push_back(n / i);
            }
        }
        sort(v.begin(), v.end());
        if (v.size() >= k)
            printf("%llu\n", v[k - 1]);
        else
            printf("-1\n");
      return 0;
    }
}
