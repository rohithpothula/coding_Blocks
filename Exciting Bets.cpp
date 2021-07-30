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
		ll a, b;
		cin >> a >> b;
		ll mi = min(a, b);
		ll ma = max(a, b);
		ll diff = abs(a - b);
		// if (diff >= mi)
		// {
		// 	cout << diff << " " << mi << endl;
		// 	continue;
		// }
		// else
		// {
		if (diff == 0)
		{
			cout << "0 0" << endl;
			continue;
		}
		ll moves1 = ma / diff;
		ll ans = abs(moves1 * diff - ma);
		ans = min(ans, ((moves1 + 1) * diff - ma));
		cout << diff << " " << ans << endl;
		// }
	}
	return 0;
}