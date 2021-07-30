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
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		int ans = 0;
		vector <int> even;
		vector <int> odd;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x % 2 == 0)
				even.push_back(x);
			else
				odd.push_back(x);
		}
		vector <int> bit;
		for (int i = 0; i < even.size(); i++)
		{
			int x = even[i];
			int ans = 0;
			while (x > 0)
			{
				if (x % 2 == 0)
					ans++;
				else
				{
					bit.push_back(ans);
					break;
				}
			}
		}
		sort(bit.begin(), bit.end());
		reverse(bit.begin(), bit.end());
		int x = bit.size();
		if (odd.size() % 2 == 1)
		{
			x--;
			ans++;
		}
		for (int i = 0; i < x - 1; i++)
		{
			ans = ans + min(bit[i], bit[i + 1]);
			i++;
		}
		cout << ans << endl;
	}
}