#include <bits/stdc++.h>
using namespace std;
int findsumofdigits(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum = sum + n % 10;
		n = n / 10;
	}
	return sum;
}
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int x = findsumofdigits(n);
		while (true)
		{
			int y = findsumofdigits(n);
			if (x * 2 == y)
			{
				cout << n << endl;
				break;
			}
			else
				n++;
		}
	}
}