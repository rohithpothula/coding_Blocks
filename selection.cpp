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
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			int pos = i;
			int mi = a[i];
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < mi)
				{
					pos = j;
					mi = a[j];
				}
			}
			swap(a[i], a[pos]);
		}
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}