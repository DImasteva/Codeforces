#include <iostream>
using namespace std;
int main()
{
	int n, zb = 0; cin >> n;
	while(n > 0)
	{
		zb += n % 2;
		n/=2;
	}
	cout << zb;
}
