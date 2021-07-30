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
	// cin>>t;
	while (t--)
	{
		string s;
		cin >> s;
		map <char, int> m;
		for (int i = 0; i < s.size(); i++)
		{
			m[s[i]]++;
		}
		int ans = 0;
		// for (auto i : m)
		// {
		// 	cout << i.first << " " << i.second << endl;
		// }
		int i = 0;

		if (m['n'] >= 3 and m['i'] >= 1 and m['e'] >= 3 and m['t'] >= 1)
		{
			ans++;
			m['n'] --;
			m['n'] --;
			m['n']--;
			m['i'] --;
			m['e'] --;
			m['e'] --;
			m['e'] --;
			m['t'] --;
			i++;
		}
		else
		{
			cout << "0" << endl;
			break;
		}



		while (true)
		{
			if (m['n'] >= 2 and m['i'] >= 1 and m['e'] >= 3 and m['t'] >= 1)
			{
				ans++;
				m['n'] --;
				m['n'] --;
				m['i'] --;
				m['e'] --;
				m['e'] --;
				m['e'] --;
				m['t'] --;
				i++;
			}
			else
				break;
		}
		cout << ans << endl;
		// cout << "jkj" << endl;
	}
	return 0;
}