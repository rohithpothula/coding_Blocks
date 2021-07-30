#include <bits/stdc++.h>
using namespace std;
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


		int mi = 99999999;

		int ma = -99999999;

		for (int i = 0; i < n; i++)
		{

			if (mi >= a[i])
			{
				mi = a[i];
			}
			if (ma <= a[i])
			{
				ma = a[i];
			}
		}

		cout << mi << " " << ma << endl;
	}
}