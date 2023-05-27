#include <bits/stdc++.h>
using namespace std;
 
long long form(int n, int x) {
    std::string num_str(n, x + '0');
    long long num = std::stoll(num_str);
    return num;
}
int getsum(long long x)
{
	long long sum = 0;
	while(x > 0)
	{
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int getlen(long long x)
{
	long long sum = 0;
	while(x > 0)
	{
		x/=10; sum++;
	}
	return sum;
}
int main()
{
	long long n; cin >> n;
	if (n < 10)
	{
		cout << n;
	} else
	{
		long long len = getlen(n);
		long long a = form(len - 1, 9);
		long long b = n - a;
		cout << getsum(a) + getsum(b);
	}
	
}
