#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	long long int c = (2LL << n) - 2;
	cout << c;
}
