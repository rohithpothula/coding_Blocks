#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= i)
			{
				continue;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
}