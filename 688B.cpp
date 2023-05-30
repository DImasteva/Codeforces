#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	vector <char> v;
	while(1)
	{
		char c = getchar();
		if (c != '\n') v.push_back(c);
		else break;
	}
	for (int i = 0; i < v.size(); i++) cout << v[i];
	for (int i = v.size() - 1; i >= 0; i--) cout << v[i];
}
