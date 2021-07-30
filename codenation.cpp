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
	ll t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		map<int, int> m;
		int ma = -10;
		vector <int> v(n);
		map <int, int> count;
		map<int, int> dum;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			m[a[i]] = i + 1;
			ma = max(ma, a[i]);
			count[a[i]]++;
			dum[a[i]] = 0;
		}
		sort(a, a + n);
		bool visited[10000];
		memset(visited, false, sizeof(visited));
		for (int i = 0; i < n; i++)
		{
			if (!visited[a[i]])
			{
				int k = 2;
				int x = a[i];
				int z = dum[a[i]];
				dum[a[i]] = z + count[a[i]] - 1;
				while (x * k <= ma)
				{
					if (m[x * k] > 0)
					{
						int z = dum[a[i]];
						dum[a[i]] = z + count[a[i] * k];
						dum[k * a[i]] = dum[k * a[i]] + 1;
						k++;
					}
				}
				visited[a[i]] = true;
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << dum[a[i]] << " ";
		}
		cout << endl;
	}
}