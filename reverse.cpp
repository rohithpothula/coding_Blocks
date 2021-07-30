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
		string s;
		cin >> s;
		int n = s.size();
		// rohith 6
		for (int i = 0; i < (n / 2); i++)
		{
			cout << ":hbfhd" << endl;
			swap(s[i], s[n - i - 1]);
			return 0;
		}
		cout << s << endl;


		//
	}
}