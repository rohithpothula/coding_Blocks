#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define endl "\n"
# define str string
# define vll vector<ll>
# define pb push_back
# define mll map<ll,ll>
# define mp make_pair
# define ff first
# define ss second
# define pll pair<ll,ll>
# define f(x,y) for(int x=0;x<y;x++)
int main() {
#ifndef ONLINE_JUDGE
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll t = 1;
	// cin >> t;
	while (t--)
	{
		int n, m, i, j, a, b;
		cin >> n >> m >> i >> j >> a >> b;
		if ((n == i and m == j) || (n == i and 1 == j) || ( 1 == i and m == j) || (1 == i and 1 == j))
		{
			cout << "0" << endl;
			return 0;
		}
		bool flag = false;
		int ans = INT_MAX;
		int x1 = abs(n - i);
		int x2 = abs(m - j);
		if (x1 % a == 0 and x2 % b == 0 and !((i + a > n and i - a < 1) or (j + b > m and j - b < 1)))
		{
			int t1 = x1 / a;
			int t2 = x2 / b;
			if (t1 % 2 == t2 % 2)
			{
				ans = min(ans, max(t2, t1));
				flag = true;
			}
		}
		// cout << ans << endl;

		x1 = abs(1 - i);
		x2 = abs(m - j);
		if (x1 % a == 0 and x2 % b == 0 and !((i + a > n and i - a < 1) or (j + b > m and j - b < 1)))
		{
			int t1 = x1 / a;
			int t2 = x2 / b;
			if (t1 % 2 == t2 % 2)
			{
				ans = min(ans, max(t2, t1));
				flag = true;
			}
		}
		// cout << ans << endl;

		x1 = abs(n - i);
		x2 = abs(1 - j);
		if (x1 % a == 0 and x2 % b == 0 and !((i + a > n and i - a < 1) or (j + b > m and j - b < 1)))
		{
			int t1 = x1 / a;
			int t2 = x2 / b;
			if (t1 % 2 == t2 % 2)
			{
				ans = min(ans, max(t2, t1));
				flag = true;
			}
		}
		// cout << ans << endl;

		x1 = abs(1 - i);
		x2 = abs(1 - j);
		if (x1 % a == 0 and x2 % b == 0 and !((i + a > n and i - a < 1) or (j + b > m and j - b < 1)))
		{
			int t1 = x1 / a;
			int t2 = x2 / b;
			if (t1 % 2 == t2 % 2)
			{
				ans = min(ans, max(t2, t1));
				flag = true;
			}
		}

		// cout << ans << endl;

		if (!flag)
		{
			cout << "Poor Inna and pony!" << endl;
		}
		else
		{
			cout << ans << endl;
		}

	}
	return 0;
}