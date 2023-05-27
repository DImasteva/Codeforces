#include <iostream>
#include <algorithm>
using namespace std;
struct laptop
{
	int price;
	int quality;	
};
bool compare(const laptop &price1, const laptop &price2)
{
    if(price1.price > price2.price)
    return 1;
    else return 0;
}
int main()
{
	int n; cin >> n;
	laptop item[n];
	for (int i = 0; i < n; i++)
	{
		cin >> item[i].price >> item[i].quality;
	}
	sort(item, item + n, &compare);
	for (int i = 0; i < n - 1; i++)
	{
		if (item[i].quality < item[i + 1].quality)
		{
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";
}
